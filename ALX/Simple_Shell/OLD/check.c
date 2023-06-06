
#include "simple_shell.h"
 
// Most of the C compilers support a third parameter to main which
// store all environment variables
//int main(int argc, char *argv[], char * envp[])

    /*     int i;
    for (i = 0; envp[i] != NULL; i++)
        printf("\n%s", envp[i]);
    getchar(); */

int main(int argc, char *argv[], char * envp[])
{
    //input string
    //char *path = getenv("PATH");
    char *srcString = getenv("PATH");
    //delimiter
    char *delim = ":";
    //calling own version of strtok function
    char *splitted = _strtokz(srcString, delim);
    while(splitted)
    {
        printf("%s\n", splitted);
        splitted = _strtokz(NULL, delim);
    }
    return 0 ;
}