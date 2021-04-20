/* Program Number: 26b
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program executes an execuatble file named exec with an input "Input given"
*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>


int main(){

        char *args[]={"./exec","Input given",NULL}; // NULL here terminated array of character pointers
        execvp(args[0],args);
        return 0;
}