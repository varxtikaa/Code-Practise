#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define max 15
int arr[max];
int top=-1;
int pop()
{
    if(top==-1)
    exit(0);
    else{
        return arr[top--];
    }
}
void push(int ele){
    if(top==max-1)
    exit(0);
    else{
        arr[++top]=ele;
    }
}
void postfix(char exp[]){
    int ch;
    for(int i=0;i<strlen(exp);i++)
    {
        ch=exp[i];
        if(isdigit(ch)){
            ch=ch-'0';
            push(ch);
        }
        else if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^'){
            int exp1,exp2;
            if(top>-1){
            exp2=pop();
            exp1=pop();
            }
            switch(ch)
            {
                case '+':
                push(exp1+exp2);
                break;
                case '-':
                push(exp1-exp2);
                break;
                case '*':
                push(exp1*exp2);
                break;
                case '/':
                push(exp1/exp2);
                case '^':
                push(exp1^exp2);
                break;
            }
        }
        else
        continue;
    }

}
int main()
{
    char exp[max];
    printf("Enter postfix expression: ");
    gets(exp);
    postfix(exp);
    printf("%d ",arr[top]);
}