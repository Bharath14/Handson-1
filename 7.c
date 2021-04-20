/* Program Number: 7
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program will take two inputs as command line arguments file1 and file2 and copy
the contents of file1 to file2.
*/

#include<stdio.h>
#include<fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        perror("wrong input");
        exit(1);
    }

    int fd1,fd2;
    fd1 = open(argv[1],O_RDONLY);
    fd2 = open(argv[2],O_CREAT|O_WRONLY|O_TRUNC,0700);
    if(fd1 == -1 || fd2 == -1)
    {
        perror("problem in file opening");
        exit(1);
    }
    char temp[100];
    int n;
    lseek(fd1,0,SEEK_SET);
    lseek(fd2,0,SEEK_SET);
    while((n = read(fd1,temp,100))>0)
    {
        if(write(fd2,temp,n)!=n)
        {
            perror("writing problem");
            exit(3);
        }
    }
    close(fd1);
    close(fd2);
    return 0;


}