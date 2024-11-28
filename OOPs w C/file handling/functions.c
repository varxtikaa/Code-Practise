#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE* fptr;
    char file[255]; //array to store data of file
    fptr=fopen("file.txt","w"); //fopen(): opens file
    fprintf(fptr,"hello there"); //fprintf(): writes data into file
    fscanf(fptr,"%s",file);
    printf("%s",file);
}