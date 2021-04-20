/* Program Number: 20
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program finds the priority of current process and modify the priority using nice
command
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/resource.h>
int main(){
	int pid = getpid();
	int priority = getpriority(PRIO_PROCESS,pid);
	printf("Original Priority : %d\n",priority);
	int r = nice(4);
	int priority_changed = getpriority(PRIO_PROCESS,pid);
    printf("Changed Priority : %d\n",priority_changed);
	return 0;
}
