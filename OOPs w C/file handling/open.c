#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE* fptr; //declaring file pointer
    //opening file in read mode
    fptr=fopen("file.txt","r");
    
    if(fptr==NULL)
    printf("File could not be opened."); //if file does not exists
    else
    exit(0);
}