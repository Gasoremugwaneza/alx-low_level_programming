#include <stdio.h>

#include <string.h>

int main()

{

char str1[100];

char newString[10][10]; 

int i,j,ctr;

printf("\n\n Split string by space into words :\n");

printf("---------------------------------------\n");    



printf(" Input  a string : ");

fgets(str1, sizeof str1, stdin);	



j=0; ctr=0;

for(i=0;i<=(strlen(str1));i++)

{
