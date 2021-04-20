/* Program Number: 5
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program will create 5 files with below names and execute an infinite loop. So
that we can run this in background and check file descriptor table of this process.
*/

#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>


int main()
{
    int fd1,fd2,fd3,fd4,fd5;
    fd1 = creat("q5_1.txt",S_IRUSR|S_IWUSR);
    fd2 = creat("q5_2.txt",S_IRUSR|S_IWUSR);
    fd3 = creat("q5_3.txt",S_IRUSR|S_IWUSR);
    fd4 = creat("q5_4.txt",S_IRUSR|S_IWUSR);
    fd5 = creat("q5_5.txt",S_IRUSR|S_IWUSR);
    int j = 1;
    while(j==1)
    {
        int k = 0;
    }
    return 0;
}