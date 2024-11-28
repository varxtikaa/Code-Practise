#include<iostream>
using namespace std;
int linear_search(int arr[],int ele, int len){
    for(int i=0;i<len;i++){
        if(arr[i]==ele){
            return 1;
        }
    }
    return 0;
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
    if(linear_search(arr,ele,n)){
        cout<<"Present";
    }
    else
    cout<<"Not present";
}