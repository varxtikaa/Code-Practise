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
void prefix_eval(char prefix[]){
    struct stack s;
    s.top=-1;
    for(int i=strlen(prefix)-1;i>=0;i--){
        char ch=prefix[i];
        if(isdigit(ch)){
            push(&s,ch-'0');
        }
        else if(ch=='*' || ch=='/' || ch=='+' || ch=='-'){
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
            }
        }
        else
        continue;
    }
    if(!isempty(s)) printf("%d",s.arr[s.top]);
    else printf("Inavlid prefix expression!");
}
int main(){
    struct stack s;
    char prefix[max];
    printf("Enter the prefix expression: ");
    gets(prefix);
    prefix_eval(prefix);
}