/* Program Number: 27b
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program executes ls -Rl using execlp 
*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
        char *file = "ls";
        char *arg1 = "-Rl";
        char *arg2 = "/home/bharath/Documents";
        execlp(file,file,arg1,arg2,NULL);
        return 0;
}