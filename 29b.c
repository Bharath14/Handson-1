/* Program Number: 29b
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program prints the scheduling policy and modify the scheduling policy of SCHED_FIFO
*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>
#include<fcntl.h>
#include<sched.h>
int main(){

    pid_t pid;
    pid = getpid();
    int curr_sched = sched_getscheduler(pid);
    printf("Current scheduling policy of present running process is %d\n", curr_sched);
    struct sched_param scp;
    scp.sched_priority = 4;
    sched_setscheduler(pid,SCHED_FIFO,&scp);
    int curr_sched2 = sched_getscheduler(getpid());
    printf("Scheduled policy scheduled under FIFO policy %d\n", curr_sched2);
    return 0;
}