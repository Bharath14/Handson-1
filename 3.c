/* Program Number: 3
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program will create a file "file_3.txt" using creat() system call and prints 
file descriptor value on the screen.
*/

#include<stdio.h>
#include <fcntl.h>
#include<stdlib.h>
int main()
{
    int fd;
    fd = creat("file_3.txt",S_IRUSR | S_IWUSR);
    if(fd == -1)
    {
        perror("Create");
        exit(1);
    }
    printf("File Descriptor is %d\n",fd);
    return 0;
}