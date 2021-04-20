/* Program Number: 1b
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program will create a file "hardlink.txt" and hard link the file with name hh_link.
*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = creat("hardlink.txt",S_IRUSR|S_IWUSR);
    int fd1 = link("hardlink.txt","hh_link");
}