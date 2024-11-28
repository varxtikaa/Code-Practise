#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define max 100
struct stack
{
    int top;
    int arr[max];
};
int isempty(struct stack s){
    return ((s.top==-1)?1:0);
}
int isfull(struct stack s){
    return ((s.top==max-1)?1:0);
}
void push(struct stack *s,int ele){
    if(isfull(*s))
    exit(0);
    else
    s->arr[++s->top]=ele;
}
int pop(struct stack *s){
    if(isempty(*s))
    exit(0);
    else{
        return s->arr[s->top--];
    }
}
int precedence(char ch){
    if(ch=='+' || ch=='-')
    return 1;
    else if(ch=='*' || ch=='/')
    return 2;
    else if(ch=='^')
    return 3;
    else
    return 0;
}
void infix_to_postfix(char infix[],char postfix[]){
    struct stack s;
    s.top=-1;
    int n=strlen(infix),postfixindex=0; 
    for(int i=0;i<n;i++){
        char c=infix[i];
        if(isalpha(c) || isdigit(c))
        postfix[postfixindex++]=c;
        else if(c=='(')
        push(&s,c);
        else if(c==')'){
            while(!isempty(s) && s.arr[s.top]!='('){
                postfix[postfixindex++]=pop(&s);
            }
            pop(&s);
        }
        else{
            while(!isempty(s) && precedence(c)<=precedence(s.arr[s.top])){
                postfix[postfixindex++]=pop(&s);
            }
            push(&s,c);
        }
    }
    while(!isempty(s)){
        postfix[postfixindex++]=pop(&s);
    }
    postfix[postfixindex]='\0'; // null terminate the postfix expression
}
int main(){
    char infix[max],postfix[max];
    printf("Enter infix expression: ");
    fgets(infix,max,stdin);
    infix_to_postfix(infix,postfix);
    printf("Postfix: %s",postfix);
    return 0;
}