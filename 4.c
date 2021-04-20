/* Program Number: 4
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program will open an already existing file in read write mode. We need to 
pass the file name using command line arguments.
*/

#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

int main(int argc, char*argv[])
{
    if(argc!=2)
    {
        perror("Provide only one file as input");
        exit(2);
    }
    int fd;
    fd = open(argv[1],O_RDWR|O_EXCL);
    if(fd != -1)
    {
        printf("File descriptor %d\n",fd);
        printf("file opened succesfully\n");
    }
    else{
        printf("file open failed\n");
        exit(2);
    }
    return 0;
}