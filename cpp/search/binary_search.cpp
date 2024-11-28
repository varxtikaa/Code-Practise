#include<iostream>
using namespace std;
int bin(int arr[],int start,int end,int k){
    int mid=(start+end)/2;
    if(start>end){
        return -1;
    }    
    if(k==arr[mid]){
        return arr[mid];
    }
    if(k<arr[mid]){
        return bin(arr,start,mid-1,k);
    }
    if(k>arr[mid]){
        return bin(arr,mid+1,end,k);
    }
}
int main(){
    int n,ele;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element you want to search:";
    cin>>ele;
    int start=0,end=n-1;
    if(bin(arr,start,end,ele)==ele){
        cout<<"Present";
    }
    else{
        cout<<"Not present";
    }
}