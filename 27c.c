/* Program Number: 27c
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program executes ls -Rl using execle 
*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>
#include<fcntl.h>


extern char **environ;
int main()
{
    char *path = "/bin/ls";
    char *arg1 = "-Rl";
    char *arg2 = "/home/bharath/Downloads";
    execle(path,path,arg1,arg2,NULL,environ);
    return 0;
}
