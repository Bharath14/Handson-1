/* Program Number: 13
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program takes input from STDIN within 10 seconds of execcution, after 10 seconds
if no input is given then process terminates.
*/

#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/time.h>

int main()
{
    struct timeval time;
    time.tv_sec = 10;
    fd_set input, output;
    FD_ZERO(&input);
    FD_SET(0,&input);
    FD_SET(1,&output);
    char temp[100];
    int x = select(1,&input,NULL,NULL,&time);
    if (x == 0)
    {
        printf("no input given in 10s.\n");
    }
    else
    {
        read(0, temp, 100);
        printf("The given input is: %s\n", temp);
    }
    return 0;
}