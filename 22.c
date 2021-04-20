/* Program Number: 22
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program opens a file and write using both parent process and child process.
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
	int fd = open("22.txt",O_RDWR);
	int pid = fork();
	if(pid == 0)
	{
		write(fd,"Child process\n",15);
	}
	else
	{
		write(fd,"Parent process\n",16);	
	}

	return 0;

}