#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define max 50
struct stack
{
    int top;
    char arr[max];
};
void init(struct stack stk)
{
    stk.top=-1;
}
int isempty(struct stack stk)
{
    if(stk.top==-1)
    {
        return 1;
    }
    else
    return 0;
}
int isfull(struct stack stk)
{
    if(stk.top==max-1)
    {
        return 1;
    }
    else
    return 0;
}
void push(struct stack stk,int ele)
{
    if(isfull(stk))
    {
        printf("Stack overflow");
    }
    else{
        stk.arr[++stk.top]=ele;
    }
}
int pop(struct stack stk)
{
    if(isempty(stk))
    {
        printf("Stack underflow");
        return 0;
    }
    else{
        return stk.arr[stk.top--];
    }
}
int precedence(char exp)
{
    if(exp=='+' || exp=='-')
    return 1;
    else if(exp=='*' || exp=='/')
    return 2;
    else if(exp='^')
    return 3;
    else
    return 0;
}
int infix_to_postfix(char infix[],char postfix[])
{
    struct stack s;
    init(s);
    int pfix_index=0;
    int n=strlen(infix);
    for(int i=0;i<n;i++)
    {
        char ch=infix[i];
        if(isdigit(ch) || isalpha(ch))
        {
            postfix[pfix_index++]=ch;
        }
        else if(ch=='(')
        {
            push(s,ch);
        }
        else if(ch==')')
        {
            if(!isempty(s) && s.arr[s.top]!=')')
            {
                postfix[pfix_index++]=pop(s);
            }
            pop(s);
        }
        else{
            if(!isempty(s) && precedence(ch)<=precedence(s.arr[s.top]))
            {
                postfix[pfix_index++]=pop(s);
            }
            push(s,ch);
        }
    }
    while(!isempty(s))
    {
        postfix[pfix_index++]=pop(s);
    }

}
int main()
{
    char infix[50],postfix[50];
    fgets(infix,50,stdin);
    infix_to_postfix(infix,postfix);
    printf("%s",postfix);
}