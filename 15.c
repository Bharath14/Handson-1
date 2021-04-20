/* Program Number: 15
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description:This program prints the environment variable of user
*/

#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main(int argc, char *argv[], char *envp[])
{
    for (int i = 0; envp[i] != NULL; i++)
    {
        printf("%d %s\n", i, envp[i]);
    }
    return 0;
}