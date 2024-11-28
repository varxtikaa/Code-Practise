#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int main()
{
    int choice,condition=1;
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size=5;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));
    s->arr[0]=1;
    s->arr[1]=2;
    s->arr[2]=3;
    s->top+=3;
    do{
        printf("\nENTER 1 FOR PUSH\nENTER 2 FOR POP\nENTER 3 FOR DISPLAY\nENTER 4 FOR PEEK\nENTER 5 FOR REVERSE\nENTER 0 TO EXIT\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            Push(s);
            break;
            case 2:
            Pop(s);
            break;
            case 3:
            Display(s);
            break;
            case 4:
            Peek(s);
            case 0:
            condition=0;
            break;
            case 5:
            Reverse(s);
            break;
            default:
            printf("Invalid Input");
            break;
        }
    }while(condition);
    
}
int isEmpty(struct stack *ptr)
{
    if(ptr->top==-1)
    return 1;
    else
    return 0;
}
int isFull(struct stack *ptr)
{
    if(ptr->top==ptr->size-1)
    return 1;
    else
    return 0;
}
int Push(struct stack *ptr)
{
    int val;
    printf("Enter the value you want to push:\n");
    scanf("%d",&val);
    if(isFull(ptr))
    {
        printf("Stack Overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=val;
        printf("Successfully Pushed.\n");
        for(int i=0;i<=ptr->top;i++)
        {
        printf("%d ",ptr->arr[i]);
        }
    }
    return 0;
}
int Pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("Stack Underflow");
    }
    else
    {
        int val=ptr->arr[ptr->top];
        ptr->top=ptr->top-1;
        printf("Succesfully Popped ");
        for(int i=0;i<=ptr->top;i++)
        {
        printf("%d ",ptr->arr[i]);
        }
        return val;
    }
    return 0;
}
void Display(struct stack *ptr)
{
    printf("The elements of the stack are:");
    for(int i=0;i<=ptr->top;i++)
    {
    printf("%d ",ptr->arr[i]);
    }
}
int Peek(struct stack *ptr)
{
    printf("The topmost element is: %d\n",ptr->arr[ptr->top]);
}
int Reverse(struct stack *ptr)
{
    for(int i=ptr->top+1;i<=0;i--)
    {
        printf("%d ",ptr->arr[i]);
    }
}