/* Program Number: 9
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program prints the stats of a file like inode number, number of hardlinks etc.
*/


#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#undef _POSTX_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/sysmacros.h>

int main(int argc ,char *argv[])
{
    if (argc != 2)
    {
        perror("Wrong input");
        return 1;
    }
    struct stat filestat;
    stat(argv[1],&filestat);
    printf("Inode number of file is:  %ld\n",(long) filestat.st_ino);
    printf("Number of hard links of file is : %ld\n",(long) filestat.st_nlink);
    printf("UID of file is: %ld\n",(long)filestat.st_uid);
    printf("GID of file is: %ld\n",(long) filestat.st_gid);
    printf("Filesize is: %lld bytes\n",(long long)filestat.st_size);
    printf("Block size of file is:%ld bytes\n",(long)filestat.st_blksize);
    printf("Number of blocks of file is: %lld\n",(long long)filestat.st_blocks);
    printf("Time of last access of file is: %s\n",ctime(&filestat.st_atime));
    printf("Time of last modification of file is: %s\n",ctime(&filestat.st_mtime));
    printf("Last status change of file is: %s\n",ctime(&filestat.st_ctime));
    return 0;
}