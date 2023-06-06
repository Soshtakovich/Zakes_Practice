#include "simple_shell.h"

/*
 * File: simple_shell.h
 * Auth: Zakes Matsimbe and Ahmed Khodeir
 * Desc: Header file containing prototypes for functions
 *       used in the simple_shell Project to get,analyse and execute commands.
 */

char* getcommand()  /* DISPLAY THE COMMAND PROMPT*/
{
    char ent[] = " $ ";
    int i;
    int len=0;
    char * incommand;
    size_t init_size = 0;

    for(i = 0; ent[i] != '\0'; i++)
    {
        len++; 
    }

    write(1,ent, len);  /*write(1,"\n", 1);*/
    size_t Command_length = getline (&incommand, &init_size, stdin);

if (Command_length == -1) /*incommand not taken*/
    {
        perror("exit");
        free(incommand);
        exit(EXIT_FAILURE);
    }
    return incommand;
}

char **analyse(char *incommand)
{
    int space = 1;
    char *delimiters = " \r\n\t";
    int i = 0;
    char **Command = malloc(space * sizeof(char*));

    if (!Command) {
        perror("simple_shell");
        free(Command);
        exit(1);
    }

    char *token = _strtokz(incommand, delimiters);

    while (token != NULL) {
        Command[i] = token;
        i++;

        if (i >= space) 
        {
            space = (int) (space * 2);
            Command = realloc(Command, space * sizeof(char*));
            if (!Command) 
            {
                perror("simple_shell");
                exit(1);
                free(Command);
            }
        }

        token = _strtokz(NULL, delimiters);
    }

    Command[i] = NULL;
    return Command;
}

void executes(char **args) /*EXECUTE*/
{ 
        int i;
        for (i = 0; i < _builtins(); i++) {
        if (strcmp(args[0], builtins[i].name) == 0) {
            builtins[i].func(args);
            return;
        }
    }

    pid_t is_child = fork(); /*CHILD PROCESS*/

    if (is_child == 0) /*CHILD PROCESS RUNNING*/
    {
       execvp(args[0], args);

       //char *argv[]={"ls","-l",NULL};
       char *argv[]={"ls","-l",NULL};
       char *env[]={"PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin",NULL};
       //execve("/usr/bin/ls", argv, env);

       fprintf(stderr, " %s  : ", args[0]);
       perror("");
       exit(1);
    } 
    else if (is_child > 0)  /*WAIT THE PARENT WHILE CHILD IS RUNNING*/
    {
        int state;
        do {
            waitpid(is_child, &state, WUNTRACED );
        } while (!WIFEXITED(state) && !WIFSIGNALED(state));
    } else 
    {
        perror("Shell"); /*FORK FAILS*/
    }
}


