/* Program Number: 1a
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program will create a file "Symlink.txt" and soft link the file with name ss_link.
*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = creat("symlink.txt",S_IRUSR|S_IWUSR);
    int fd1 = symlink("symlink.txt","ss_link");
}