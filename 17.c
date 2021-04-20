/* Program Number: 17a
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program creates a sample record for file locking experimentation. 
*/

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <syscall.h>
typedef struct ticket
{
    char *person_name;
    int ticket_num;
} ticket;

int main()
{
    int fd = open("17.txt",O_RDWR);
    if (fd == -1)
    {
        printf("open failed\n");
        return 0;
    }
    ticket *ticket1 = (ticket *)malloc(sizeof(ticket));

    ticket1->person_name = "bharath";
    ticket1->ticket_num = 14;
    write(fd, ticket1, sizeof(ticket));
    close(fd);
}