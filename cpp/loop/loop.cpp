#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    string name;
    int n;
    cout<<"Enter name: "<<endl;
    getline(cin,name);
    cout<<"Enter padding: "<<endl;
    cin>>n;
    int len=name.size();
    for(int i=0;i<=n*2;i++){
        if(i==0 || i==n*2){
            for(int i=0;i<n*2;i++){
                cout<<"* ";
            }
        }
        else if(i==n){
            cout<<"* "<<setw((n*2)-len)<<name<<setw((n*2)-len)<<" *";
        }
        else{
            cout<<"*"<<setw((n*4)-1)<<"*";
        }
        cout<<endl;
    }
}