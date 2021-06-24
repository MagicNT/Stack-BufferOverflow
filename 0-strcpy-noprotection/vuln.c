#include <stdio.h>
#include <string.h>


void copy_data(char *data);


int main(int argc, char *argv[])
{
    if (argc > 1)
        copy_data(argv[1]);
}


void copy_data(char *data)
{
    char buffer[350];
    strcpy(buffer, data);
}


