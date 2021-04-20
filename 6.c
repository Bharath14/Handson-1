/* Program Number: 6
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program will take/read input from STDIN file and print/write output to STDOUT file
*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    char *temp[100];

    int n = read(0,temp,100);
    write(1,temp,n);

    return 0;
}