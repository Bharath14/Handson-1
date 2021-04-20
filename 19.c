/* Program Number: 19
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program prints the time taken by getpid system call. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/time.h>

unsigned long long rdtsc()
{
	unsigned long long dst;
	__asm__ __volatile__ ("rdtsc" : "= A" (dst));
}

int main()
{
	unsigned long long int start_time,end_time;
	start_time = rdtsc();
	getpid();
	end_time = rdtsc();

	printf("Time taken to execute getpid function : %lld\n ", (end_time - start_time)/1800 );
}