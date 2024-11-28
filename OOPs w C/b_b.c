#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define max 15
int arr[max];
int top=-1;
int pop()
{
    if(top==-1)
    exit(0);
    else
    return arr[top--];
}
void push(int ele)
{
    if(top==max-1)
    exit(0);
    else
    arr[++top]=ele;
}
int balanced_brackets(char exp[])
{
    int ch,i=0;
    int len=strlen(exp);
    for(;i<len;i++)
    {
        ch=exp[i];
        if(ch=='(' || ch=='{' || ch=='[')
        push(ch);
        else if(ch==')' || ch=='}' || ch==']')
        {
            if((ch==')' && arr[top]=='(') || (ch=='}' && arr[top]=='{') || (ch==']' && arr[top]=='['))
            {
                pop();
            }
            else
            return 0;
        }
    }
    return ((top==-1)?1:0);
}
int main()
{
    char exp[max];
    printf("Enter the expression: ");
    gets(exp);
    if(balanced_brackets(exp))
    printf("Balanced");
    else
    printf("Not balanced");
    return 0;
}