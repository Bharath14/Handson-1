/* Program Number: 12
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program takes a file as command line input and prints the opening mode of the file.
*/

#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main(int argc, char*argv[])
{
    if(argc != 2)
    {
        perror("Wrong input");
        return 1;
    }
    int fd = open(argv[1],O_RDONLY);
    int mode = fcntl(fd,F_GETFL);
    int flag = mode&O_ACCMODE;
    if(flag==0)
    {
        printf("Read only");
    }
    else if(flag==1)
    {
        printf("write only");
    }
    else if(flag==2)
    {
        printf("read and write");
    }
}