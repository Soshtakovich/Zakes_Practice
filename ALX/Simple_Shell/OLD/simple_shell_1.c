#include "simple_shell.h"

/*
 * File: simple_shell_1.c
 * Auth: Zakes Matsimbe and Ahmed Khodeir
 * Desc: UNIX command line interpreter with no added features
 */

void executess(char **args) /*EXECUTE*/
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
      execve(args[0], args, NULL);
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


int main(int argc, char *argv[], char * envp[])
{

 while (true) 
 {
   char* incommand = getcommand();
   char ** Command = analyse(incommand);

 if (Command[0] != NULL) 
 {
    executess(Command);
 }
   free(incommand);
   free(Command);
 }

}
