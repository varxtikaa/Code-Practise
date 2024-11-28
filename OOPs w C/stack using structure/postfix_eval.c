#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define max 100
struct stack{
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
void postfix_eval(char postfix[]){
    struct stack s;
    s.top=-1;
    for(int i=0;i<strlen(postfix);i++){
        char ch=postfix[i];
        if(isdigit(ch)){
        ch=ch-'0';
        push(&s,ch);
        }
        else if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            int e1,e2;
            while(!isempty(s)){
                e2=pop(&s);
                e1=pop(&s);
            }
            switch(ch){
                case '+':
                push(&s,e1+e2);
                break;
                case '-':
                push(&s,e1-e2);
                break;
                case '*':
                push(&s,e1*e2);
                break;
                case '/':
                push(&s,e1/e2);
                break;
            }
        }
        else continue;
    }
    if(!isempty(s))
    printf("%d",s.arr[s.top]);
    else
    printf("Invalid");
}
int main(){
    struct stack s;
    char postfix[max];
    printf("Enter the postfix expression: ");
    gets(postfix);
    postfix_eval(postfix);
}