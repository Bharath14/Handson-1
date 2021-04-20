/* Program Number: 10
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program opens a file and write 10 characters into file and then seek another 10 locations and then again write 10 characters
*/

#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd;
    fd = open("file2",O_RDWR);
    char *s = "HiIamBha";
    write(fd,s,10);
    int l = lseek(fd,10,SEEK_CUR);
    write(fd,s,10);
    printf("%d",l);
    return 0;
}