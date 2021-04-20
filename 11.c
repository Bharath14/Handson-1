/* Program Number: 11a
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program duplicates the file descriptor using dup() and append the file using both
the descriptors.
*/

#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd = open("11.txt",O_WRONLY|O_APPEND);
    int copy_fd = dup(fd);
    write(fd,"originalfd\n",12);
    write(copy_fd,"Copy_fd\n",9);

    close(fd);
    return 0;
}