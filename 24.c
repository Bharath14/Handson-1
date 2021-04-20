/* Program Number: 24
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program create an orphan process by exiting the parent process before the child 
process execution completed.
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
                exit(1);
        }
        else
        {
                sleep(30);
		printf("Child process has become orphan");
        }
        return 0;

}