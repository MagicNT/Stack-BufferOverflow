#include <stdio.h>
#include <string.h>


void copy_data();


int main(int argc, char *argv[])
{
    printf("Hi there!\n");
    copy_data();
}


void copy_data()
{
    char buffer[350];
    gets(buffer);
}


