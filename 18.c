/* Program Number: 18c
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program creates a sample record for Advisory file locking experimentation. 
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
    int fd = open("18.txt",O_RDWR);
    if (fd == -1)
    {
        printf("open failed\n");
        return 0;
    }
    lseek(fd,0,SEEK_SET);
    ticket *ticket1 = (ticket *)malloc(sizeof(ticket));
    ticket *ticket2 = (ticket *)malloc(sizeof(ticket));
    ticket *ticket3 = (ticket *)malloc(sizeof(ticket));
    ticket1->person_name = "bharath";
    ticket1->ticket_num = 14;
    ticket2->person_name = "sai";
    ticket2->ticket_num = 65;
    ticket3->person_name = "ellanti";
    ticket3->ticket_num = 54;
    write(fd, ticket1, sizeof(ticket));
    write(fd, ticket2, sizeof(ticket));
    write(fd, ticket3, sizeof(ticket));
    close(fd);
}