#include<stdio.h>
#define max 5
#include<stdlib.h>
int arr[max];
int front=-1;
int rear=-1;
int isempty()
{
    if(front==-1 && rear==-1)
    return 1;
    else
    return 0;
}
int isempty()
{
    if(rear==max-1)
    return 1;
    else return 0;
}
int enqueue(int ele)
{
    
}