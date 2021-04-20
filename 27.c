/* Program Number: 27a
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program executes ls -Rl using execl 
*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
	char *path = "/bin/ls";
	char *arg1 = "-Rl";
	char *arg2 = "/home";	
	execl(path,path,arg1,arg2,NULL);
    return 0;
}