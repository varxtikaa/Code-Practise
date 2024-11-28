#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define max 100
struct stack {
    int top;
    int arr[max];
};
int isempty(struct stack s){
    return ((s.top==-1)?1:0);
}
int isfull(struct stack s){
    return ((s.top==max-1)?1:0);
}
int pop(struct stack *s){
    if(isempty(*s)) exit(0);
    else return s->arr[s->top--];
}
void push(struct stack *s,int ele){
    if(isfull(*s)) exit(0);
    else s->arr[++s->top]=ele;
}
int precedence(char e){
    if(e=='+' || e=='-')
    return 1;
    else if(e=='*' || e=='/')
    return 2;
    else if(e=='^')
    return 3;
    else
    return 0;
}
void infix_postfix(char in[],char post[]){
    struct stack s;
    s.top=-1;
    int p_index=0;
    for(int i=0;i<strlen(in);i++){
        char ch=in[i];
        if(isdigit(ch) || isalpha(ch))
        post[p_index++]=ch;
        else if(ch=='(')
        push(&s,ch);
        else if(ch==')'){
            while(!isempty(s) && s.arr[s.top]!='(')
            {
                post[p_index++]=pop(&s);
            }
            pop(&s);
        }
        else{
            while(!isempty(s) && precedence(ch)<=precedence(s.arr[s.top])){
                post[p_index++]=pop(&s);
            }
            push(&s,ch);
        }
    }
    while(!isempty(s)){
    post[p_index++]=pop(&s);
    }
    post[p_index]='\0';
}
int main()
{
    char infix[max],postfix[max];
    printf("Enter infix expression: ");
    fgets(infix,max,stdin);
    infix_postfix(infix,postfix);
    printf("Postfix: %s",postfix);
    return 0;
}
