#include "simple_shell.h"

/*
 * File: simple_shell.c
 * Author: Zakes Matsimbe and Ahmed Khodeir
 * Desc: File running the shell
 */

int main(int argc, char **argv, char **envp)  /*RUNS THE SHELL*/
{

 while (true) 
 {
   char* incommand = getcommand();
   char ** Command = analyse(incommand);

 if (Command[0] != NULL) 
 {
    executes(Command);
 }
   free(incommand);
   free(Command);
 }

}