/* Program Number: 27d
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program executes ls -Rl using execv 
*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
        char *path = "/bin/ls";
        //char *arg1 = "-Rl";
        //char *arg2 = "/home/bharath/Documents";
        char *args[] = {path,"-Rl","/home/bharath/Documents",NULL};
       	execv(path,args);
        return 0;
}