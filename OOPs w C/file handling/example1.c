// C program to Open a File,
// Write in it, And Close the File
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE* fptr;
    char data[50];
    fptr=fopen("file.txt","w");
    if(fptr==NULL)
    {
        printf("File could not be opened.");
        return 0;
    }
    else
    {
        printf("Enter the data you want to write:\n");
        fgets(data,50,stdin);
        fputs(data,fptr);
        fclose(fptr);
    }
    printf("Succesfully written.");
}