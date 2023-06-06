#include "simple_shell.h"

void _cd(char **args)  /*Change the working directory*/
{
    if (args[1] == NULL) 
    {  
    char ent[] = "simple_shell: cd: missing argument\n";
    int i;
    int len=0;
    char * incommand;
    size_t init_size = 0;

    for(i = 0; ent[i] != '\0'; i++)
    {
        len++; 
    }

    write(2,ent, len);  /*write(1,"\n", 1);*/

    } 
    else 
    {
        if (chdir(args[1]) != 0) 
        {
            perror("Shell: cd");
        }
    }
}

void __exit(char **args) /* Exits the shell*/
{
    exit(0);
}
void __env(char **args) /* Exits the shell*/
{
    
}

struct builtin  /*A builtin instance associates a command name with a handler function*/
{
    char *name;
    void (*func)(char **args);
};

struct builtin builtins[] =  /*Array of built in commands*/
{
    {"cd", _cd},
    {"exit", __exit},
    {"env", __env},
};

int _builtins() /*Returns the number of registered commands*/
{
    return sizeof(builtins) / sizeof(struct builtin);
}