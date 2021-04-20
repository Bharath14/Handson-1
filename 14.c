/* Program Number: 14
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program takes a file as input from command line and prints the type of the file.
*/

#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include <sys/stat.h>

int main(int argc,char *argv[])
{
    if(argc != 2)
    {
        perror("wrong input");
    }

    struct stat filestat;
    stat(argv[1],&filestat);
    printf("file type = %d\n",filestat.st_mode);
    int mode = filestat.st_mode;
    if (S_ISREG(mode))
	{
		printf("file type:Regular");
	}
	else if (S_ISDIR(mode))
	{
		printf("File type:Directory");
	}
	else if (S_ISCHR(mode))
	{
		printf("File type:Chracter device");
	}
	else if (S_ISBLK(mode))
	{
		printf("File type:Block device");
	}
	else if (S_ISFIFO(mode))
	{
		printf("File type:FIFO(named pipe)");
	}
	else if (S_ISLNK(mode))
	{
		printf("File type:Symbolic link");
	}
	else if (S_ISSOCK(mode))
	{
		printf("File type:Socket");
	}

}