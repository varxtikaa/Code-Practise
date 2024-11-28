#include<iostream>
using namespace std;

int sum_arr(int arr[],int len,int index,int k,int sum){
    if(sum==k){
        return 1;
    }
    if(index>=len){
        return 0;
    }
    // if(arr[index]>k){
    //     return sum_arr(arr,len,index+1,k,sum);
    // }
    // if(sum+arr[index]<=k){
    //     sum+=arr[index++];
    //     return sum_arr(arr,len,index+1,k,sum);
    // }
    if(sum+arr[index]<=k){
        if(sum_arr(arr,len,index+1,k,sum+arr[index]))
        return 1;
    }
    if(sum_arr(arr,len,index,k,sum))
    return 1;
    else
    return 0;

}
int main(){
    int n,k;
    cout<<"Enter length: ";
    cin>>n;
    int array[n];
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Enter element: ";
    cin>>k;
    if(sum_arr(array,n,0,k,0))
    cout<<"Possible";
    else
    cout<<"Not Possible";
}
