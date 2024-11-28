#include<iostream>
using namespace std;
int main(){
    string arr;
    cin>>arr;
    int len=arr.size();
    char max='a';
    for(int i(0);i<len;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int freq[26]={0};
    for(int i=0;i<len;i++){
        freq[arr[i]-'a']++;
    }
    for(int i=0;i<=26;i++){
        if(freq[i]>0)
        cout<<"Frequency of "<<i+'a'<<"="<<freq[i]<<endl;
    }
}