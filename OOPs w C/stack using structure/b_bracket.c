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
int balance_brackets(char exp[]){
    struct stack s;
    s.top=-1;
    for(int i=0;i<strlen(exp);i++){
        char ch=exp[i];
        if(ch=='(' || ch=='{' || ch=='['){
            push(&s,ch);
        }
        else if((ch==')' && s.arr[s.top]=='(') || (ch==']' || s.arr[s.top]=='[') || (ch=='{' || ch=='}'))
            pop(&s);
        else
        return 0;
    }
    return ((isempty(s))?1:0);
}
int main(){
    char expression[max];
    printf("Enter the expression:\n");
    gets(expression);
    if(balance_brackets(expression))
    printf("Balanced!");
    else
    printf("Not balanced!");
}