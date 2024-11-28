#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    string s2[100],tempword;
    int index=0;
    for(char c:s){
        if(!isdigit(c) && c!=' ')
        tempword+=c;
        else if(isdigit(c)){
        s2[c]=tempword;
        tempword=false;
        index++;
        }
    }
    for(int i=1;i<=index;i++){
        cout<<s2[i]<<" ";
    }
}