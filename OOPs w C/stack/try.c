#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
    int andd[100];
    int orr[100];
    int xorr[100];
    int m,n;
//Complete the following function.
void pair(int arr[],int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int e1=arr[i];
            int e2=arr[j];
            andd[i]=arr[i]&arr[j];
            orr[i]=arr[i]|arr[j];                                                                                                                                   
            xorr[i]=arr[i]^arr[j];
        }
    }
}
void maximum_and(){
    for(int i=0;i<n-1;i++){
        int max=-1;
        for(int j=0;j<n-i-1;j++){
            if(andd[j]>andd[j+1]){
                int temp=andd[j];
                andd[j]=andd[j+1];
                andd[j+1]=temp;
            }
        }
    }
    printf("%d\n",andd[n-1]);
}
void maximum_or(){
    // int n=sizeof(or)/sizeof(or[0]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(orr[j]>orr[j+1]){
                int temp=orr[j];
                orr[j]=orr[j+1];
                orr[j+1]=temp;
            }
        }
    }
    printf("%d\n",orr[n-1]);
}
void maximum_xor(){
    // int n=sizeof(xor)/sizeof(xor[0]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(xorr[j]>xorr[j+1]){
                int temp=xorr[j];
                xorr[j]=xorr[j+1];
                xorr[j+1]=temp;
            }
        }
    }
    printf("%d",xorr[n-1]);
}
int main(){
    // int andd[100];
    // int orr[100];
    // int xorr[100];
    // int m,n;
    scanf("%d %d",&m,&n);
    int arr[n];
    for(int i=m;i<=n;i++){
        arr[n-m-1]=i;
    }
    pair(arr,n);
    maximum_and(); maximum_or(); maximum_xor();
}
