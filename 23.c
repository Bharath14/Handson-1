/* Program Number: 23
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program creates a Zombie state by making parent busy and child waiting to return exit values
to parent. 
*/

#include<stdio.h>
#include<unistd.h>
#include<sys/resource.h>
#include<stdlib.h>
#include<time.h>
#include<sys/types.h>
#include<fcntl.h>

int main()
{
	int pid = fork();
	if(pid > 0)
	{
		sleep(30);
	}
	else
	{	
		exit(0);
	}
	return 0;
}