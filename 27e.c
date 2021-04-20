/* Program Number: 27e
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program executes ls -Rl using execvp
*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
        char *file = "ls";
        char *args[] = {file,"-Rl","/home/bharath/Documents",NULL};
        execvp(file,args);
        return 0;
}
