#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE* fptr;
    fptr=fopen("file_new.txt","w"); // file_new doesnt exist so it will be created
    //using w, w+, wb, wb+, a, a+, ab, and ab+.
    if(fptr==NULL)
    printf("File could not be opened");
    else
    exit(0);
}
/*
r - read and create file if file doesnt exist creates a new one
r+ - searches, sets up pointer to first character
rb - open for reading in binary mode
rb+ - reading wriitng in binary mode
w - open for writing in text mode, if file exists- data is overwritten else created if not exist
w+ - searches, if exists data overwritten else file created
wb - open for writing in binary mode, if file exists- data is overwritten else created if not exist
wb+ open for reading and writing in binary mode
a/a+- searches, pointer to the nd of the file
ab - open for appending in binary mode, data added to the end of the file.
ab+ - open for reading and appending in binary mode
*/