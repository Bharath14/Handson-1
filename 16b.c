/* Program Number: 16b
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program takes file as input from command line and implements mandatory 
wrietlock on the file. 
*/

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <syscall.h>

int main(int argc, char*argv[])
{
    if(argc != 2)
    {
        perror("wrong input");
        return 1;
    }
    int fd = open(argv[1],O_RDWR);
    lseek(fd, 0, SEEK_SET);
    static struct flock lock;
    lock.l_type = F_WRLCK;
    lock.l_start = 0;
    lock.l_whence = SEEK_SET;
    lock.l_len = SEEK_END; 
    lock.l_pid = getpid();

    int ret = fcntl(fd, F_SETLKW, &lock);
    printf("Return value of fcntl:%d\n", ret);
    while (1)
    {
    }
    return 0;
}