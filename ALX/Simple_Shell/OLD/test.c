
#include "simple_shell.h"
 
// Most of the C compilers support a third parameter to main which
// store all environment variables


 
// Most of the C compilers support a third parameter to main which
// store all environment variables

extern char **environ;

int main(int argc, char **argv) {
    // list out all the environment variables
    for (int i=0; environ[i]!=NULL; i++) {
        printf(" %s\n", environ[i]);
    }

    return 0;
}

