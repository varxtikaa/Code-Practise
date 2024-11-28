#include<stdio.h>
#include<stdlib.h>
#define max 5
struct stack{
    int top;
    int arr[max];
};
int compare(const void *x,const void *y){
    int a=*(int *)x;
    int b=*(int *)y;
    return b-a;
}
int main(){
    struct stack s;
    s.top=-1;
    int len=sizeof(s.arr)/sizeof(s.arr[0]);
    for(int i=0;i<max;i++){
        printf("Enter %d index element: ",i);
        scanf("%d",&s.arr[i]);
    }
    qsort(s.arr,len,sizeof(s.arr[0]),compare);
    printf("The sorted array is:\n");
    for(int i=0;i<max;i++){
        printf("%d ",s.arr[i]);
    }
    return 0;
}