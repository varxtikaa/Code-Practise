#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
// int Pop(struct stack *ptr);
// int Push(struct stack *ptr,int n);
// void Display(struct stack *ptr);
// int isFull(struct stack *ptr);
// int isEmpty(struct stack *ptr);
int isEmpty(struct stack ptr)
{
    if(ptr.top==-1)
    return 1;
    else
    return 0;
}
int isFull(struct stack ptr)
{
    if(ptr.top==ptr.size-1)
    return 1;
    else
    return 0;
}
int Push(struct stack ptr,int val)
{
    if(isFull(ptr))
    {
        printf("Stack Overflow");
    }
    else
    {
        ptr.top++;
        ptr.arr[ptr.top]=val;
        // printf("Successfully Pushed.");
        printf("The elements of the stack are:\n");
        for(int i=0;i<=ptr.top;i++)
        {
        printf("%d\n",ptr.arr[i]);
        }
    }
    return 0;
}
int Pop(struct stack ptr)
{
    if(isEmpty(ptr))
    {
        printf("Stack Underflow");
    }
    else
    {
        int val=ptr.arr[ptr.top];
        ptr.top=ptr.top-1;
        // printf("%d",ptr.top);
        printf("Succesfully Popped ");
        for(int i=0;i<=ptr.top;i++)
        {
            printf("%d ",ptr.arr[i]);
        }
        return val;
    }
    return 0;
}
void Display(struct stack ptr)
{
    printf("The elements of the stack are:\n");
    for(int i=0;i<=ptr.top;i++)
    {
        printf("%d\n",ptr.arr[i]);
    }
}
void reverse(struct stack s){
    int len = sizeof(s.arr)/sizeof(s.arr[0]);
    int reverse[len];
    for(int i=0; i<sizeof(s.arr)/sizeof(s.arr[0]);i++){
        reverse[--len] = s.arr[i];
    }
    for(int i=0; i<sizeof(s.arr)/sizeof(s.arr[0]); i++){
        printf("%d ", reverse[i]);
    }
}
int main()
{
    int choice,val,condition=1;
    struct stack s;
    s.size=5;
    s.top=-1;
    s.arr=(int *)malloc(s.size*sizeof(int));
    // printf("Enter the elements of the array:\n");
    // for(int i=0;i<5;i++)
    // {
    //     printf("Enter %d: ", i+1);
    //     int some_value;
    //     scanf("%d",&some_value);
    //     s.arr[i] = some_value;
    //     s.top++;
    // }
    // printf("top %d",s.top);
    s.arr[0]=1;
    s.arr[1]=2;
    s.arr[2]=3;
    s.top+=3;    
    printf("ENTER 1 FOR POP\nENTER 2 FOR PUSH\nENTER 3 FOR DISPLAY\nENTER 0 TO EXIT\n");
    while(condition)
    {
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        Pop(s);
        break;
        case 2:
        printf("Enter the value you want to push:\n");
        scanf("%d",&val);
        Push(s,val);
        break;
        case 3:
        Display(s);
        break;
        case 0:
        condition=0;
        break;
        case 4:
        reverse(s);
        default:
        printf("Invalid Input");
        return 0;
        break;
    }
    }
}

// #include<stdio.h>
// #include<stdlib.h>
