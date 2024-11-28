#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={1,2,3,3,3,3,2,4,4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    // for(int i=0;i<len;i++){
    //     int count=1;
    //      if(arr[i]==-1)
    //      {continue;
    //      }
    //     for(int j=i+1;j<len;j++){
    //         if(arr[i]==arr[j]){
    //             count+=1;
    //             arr[j]+=1;
    //         }
    //         else if(i==j)
    //         continue;
    //         // arr[i]=-1;
    //     }
    //     cout<<"Frequency of "<<arr[i]<<"="<<count<<endl;
    // }


    int count[6]={0,0,0,0,0,0};
    for(int i=0;i<len;i++){
        int index=arr[i];
        count[index]+=1;
    }
    for(int i=0;i<6;i++){
        cout<<"Frequency of "<<i<<"="<<count[arr[i]]<<endl;
    }

    int max=INT_MIN;
    for(int i(0);i<len;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int freq[max+1]={0};
    for(int i=0;i<len;i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<=max;i++){
        if(freq[i]>0)
        cout<<"Frequency of "<<i<<"="<<freq[i]<<endl;
    }
}