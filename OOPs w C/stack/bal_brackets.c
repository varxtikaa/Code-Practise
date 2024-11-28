#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
struct stack
{
    int top;
    int arr[max];
};
int isEmpty(struct stack *ptr)
{
    if(ptr->top==-1)
    return 1;
    else
    return 0;
}
int isFull(struct stack *ptr)
{
    if(ptr->top==max-1)
    return 1;
    else
    return 0;
}
int Push(struct stack *ptr,int val)
{
    if(isFull(ptr))
    {
        printf("Stack Overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=val;
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
        return val;
    }
    return 0;
}
// void init(struct stack s)
// {
//     s.top=-1;
// }
int ismatching(char e1, char e2)
{
    if((e1=='{' && e2=='}') || (e1=='[' && e2==']') || (e1=='(' && e2==')'))
    return 1;
    else
    return 0;
}
int isbalanced(char exp[])
{
    int ch,len,i=0;
    struct stack s;
    // init(s);
    s.top=-1;
    len=strlen(exp);
    while(i<len)
    {
        ch=exp[i];
        if(exp[i]=='{' || exp[i]=='[' || exp[i]=='(')
        Push(&s,exp[i]);
        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
        {
            if(s.top==-1 || !ismatching(Pop(&s),exp[i]))
            return 0;
        }
        i++;    
    }
    if(s.top==-1)
    return 1;
    else
    return 0;
}
int main()
{
    char expression[50];
    printf("Enter expression: ");
    fgets(expression,50,stdin);
    if(isbalanced(expression))
    printf("balanced");
    else
    printf("not balanced");
    return 0;
}
