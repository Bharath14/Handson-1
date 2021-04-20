/* Program Number: 26a
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program executes an execuatble file named exec
*/


#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>


int main()
{
	char *args[]={"./exec",NULL}; 
	execvp(args[0],args);	
	return 0;
}