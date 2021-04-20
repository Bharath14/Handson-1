/* Program Number: 1c
    Student Name: Ellanti Bharath Sai; 
    Register Number: IMT2018022
    Date:25-02-2021
    Description: This program will create a fifo file using mknod and mkfifo.
*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include <sys/stat.h>

int main()
{
    int fd;
    fd = mkfifo("fifofile",0777);

    int fd1;
    fd1 = mknod("fifonod",S_IFIFO,0700);
    return 0;
}