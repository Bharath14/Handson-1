/* Program Number: 21
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program calls fork() and print parent and child process id. 
*/

#include<stdio.h>
#include<unistd.h>
#include<sys/resource.h>
#include<stdlib.h>
#include<time.h>
#include<sys/types.h>

int main()
{
	int pid = fork();
	if(pid ==0){
		printf("pid of child : %d\n",getpid());
		printf("pid of parent  : %d\n",getppid());
	}
	return 0;
}