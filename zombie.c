/*PROBLEM_1:- 
Write a program to create the two zombie process and two orphan process using system call.*/

CODE SNIPPET:-
#include<stdio.h>
#include<unistd.h>

#include <stdlib.h>
#include <sys/types.h>
int main()
{
    // fork returns process id in parent process
    pid_t child_pid = fork();
 
    // parent process 
    if (child_pid > 0)
        sleep(30);
    // child process 
//child process finished execution using exit() while parent sleep for 30sec. 
    else       
        exit(0);
	// create a child process      
    int pid1 = fork();
	int pid2 = fork();
   if (pid1 > 0)
        printf(“parent process");
    else if (pid1 == 0)
    {
        sleep(20);
        printf(" child process");
    }
  if (pid2 > 0)
        printf(" parent process");
    else if (pid2== 0)
    {
        sleep(20);
        printf("child process");
    return (0);
}
 


