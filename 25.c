/* Program Number: 25
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program creates three child process .
*/


#include<stdio.h>
#include<unistd.h>
#include<sys/resource.h>
#include<stdlib.h>
#include<time.h>
#include<sys/types.h>
#include<fcntl.h>
#include <sys/wait.h>

int main()
{
	
	int pid,pid1,pid2;
	int parent_pid = getpid();
	pid = fork();

	if(pid==0)
	{
		printf("1st child pid = %d and parent Pid = %d\n", getpid(),getppid());	
	}

	else
	{
		pid1 = fork();
		if(pid1 == 0)
		{
				sleep(1);
				printf("2nd child pid = %d and parent Pid = %d\n", getpid(),getppid());
		}
		else{
			pid2 = fork();
			if(pid2==0)
			{
				sleep(2);
				printf("3rd Child pid = %d and parent pid = %d\n", getpid(),getppid());		
			}
			else
			{
				printf("Parent pid %d ", parent_pid);
			}
			waitpid(pid2,NULL,0);
		}
	
	}
	return 0;
}