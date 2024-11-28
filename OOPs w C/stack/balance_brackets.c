#include<stdio.h>
#include<string.h>
#define size 20
struct stacktemp{
    int top;
    int stack[size];
};
void init(struct stacktemp *stack){
    stack->top=-1;

}
int push(struct stacktemp *stack,char element){
    if(stack->top==size-1){
        printf("stack is full");
    }
    stack->top++;
    stack->stack[stack->top]=element;
    return 0;
}
char pop(struct stacktemp *stack){
    if(stack->top==-1){
        printf("stack is empty");
    }
    char element=stack->stack[stack->top];
    stack->top--;
    return element;
}
int checkbal(struct stacktemp *stack,char *string,int length){
    char element;
    for(int i=0;i<length;i++){
        element=string[i];
        if(element=='{' || element=='(' || element=='[')
        push(stack,element);
        else if(element=='}' || element==')' || element==']')
        {
            char topelement=pop(stack);
            // printf("%c",topelement);
            if((topelement=='{' && element=='}') || (topelement=='(' && element==')') || (topelement=='[' && element==']')){
                continue;
            }
            else{
                return 0;
            }
        }
    }return stack->top==-1?1:0;
    }
int main()
{
    struct stacktemp stack;
    char string[20];
    init(&stack);

    printf("Enter the expression");
    scanf("%s",string);
    int length=strlen(string);
    int result=checkbal(&stack,string,length);
    if(result==1)
    {
        printf("Balanced bracked...");
    }
    else
    {
        printf("no balanced");
    }
}