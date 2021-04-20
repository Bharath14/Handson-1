/* Program Number: 30
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program run a script at a specific time using deamon process
*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/time.h>
#include<sys/stat.h>

int main()
{
    int pid = fork();
	if(pid==0)
	{
	    printf("Child pid : %d\n",getpid());
	    setsid();
	    chdir("/");
	    umask(0);
		while(1)
        {
		    sleep(5);
		    printf("Daemon Process \n");
			printf("%d\n",getppid());
		}
	}
	else
    {
        printf("Parent PID : %d\n", getpid());
		exit(0);
    }

}