#include "simple_shell.h"

/*
 * File: simple_shell_1.c
 * Auth: Zakes Matsimbe and Ahmed Khodeir
 * Desc: UNIX command line interpreter with added features
 */


int main()  /*RUNS THE SHELL*/
{

 bool cmd_direct = false;
 while (true )//&& !cmd_direct) 

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
