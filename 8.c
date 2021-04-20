/* Program Number: 8
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program needs one file as command line arguments and will read line by line
from file and prints each as it is read.
*/

#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main(int argc,char*argv[])
{
    int fd;
    if(argc != 2)
    {
        perror("Wrong Input");
        return 1;
    }
    fd = open(argv[1],O_RDONLY);
    if(fd == -1)
    {
        perror("open");
        return 1;
    }
    char temp[1000];
    int index = 0;
    lseek(fd,0,SEEK_SET);
    while(read(fd,&temp[index],1)>0)
    {
        if(temp[index]=='\n')
        {
            for(int i =0;i<index;i++)
            {
                printf("%c",temp[i]);
            }
            printf("\n");
            index = 0;
            continue;
        }
        index++;
    }
    close(fd);
    return 0;
}
