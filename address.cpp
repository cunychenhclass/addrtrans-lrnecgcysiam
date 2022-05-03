#include<stdio.h>

#include<stdlib.h>

int main(int argc, char *argv[])

{

int address =atoi(argv[1]);

printf("\nThe address %d contains:\n", address);

printf("page number = %d\n", address/4096);

printf("offset = %d\n\n", address%4096);

}