#include<stdio.h>
#define max 5
int stack[max];
int top = -1;

// push // pop // display // peek // reverse // isempty // isfull
// is empty
int isempty(){
    if(top == -1){
        printf("stack empty");
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(){
    if(top == max-1){
        return 1;
    }
    return 0;
}
void push(int ele){
    if(isfull()){
        printf("full");
    }
    else{
        stack[++top] = ele;
    }
}
int pop(){
    if(isempty()){
        return 1;
    }
    return stack[top--];
}
void display(){
    if(isempty()){
        printf("khalli");
    }
    else{
        for(int i = 0;i<=top;i++){
            printf("%d ",stack[i]);
        }
    }
}
int peek(){
    if(isempty()){
        return -1;
    }
    else{
        return stack[top];
    }
}
void reverse(){
    int arr[5];
    int i = 0;
    while(top>-1 && i<5){
        int temp = pop();
        arr[i] = temp;
        i++;
    }
    for(int i = 0;i<5;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    printf("\n");
    // printf("%d",pop());
    reverse();

}

