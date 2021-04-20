/* Program Number: 28
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program prints the Maximum priority level and minimum priority level of real time 
process
*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sched.h>
int main(){
	
	int max,min;

	max = sched_get_priority_max(SCHED_FIFO);
	min = sched_get_priority_min(SCHED_FIFO);

	printf("Maximum priority level is : %d\n", max);

	printf("Minimum priority level is : %d\n", min);

	return 0;
}