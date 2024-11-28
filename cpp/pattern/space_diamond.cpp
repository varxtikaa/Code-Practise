#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        for(int space = 0;space<n-i-1;space++){
            cout << " ";
        }
        for(int j = 0;j<2*i+1;j++){
            if(j == 0 || j == 2*i){
                cout<<"*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    for(int i = n-2;i>=0;i--){
        for(int space = 0;space<n-i-1;space++){
            cout << " ";
        }
        for(int j = 0;j<2*i+1;j++){
            if(j == 0 || j == 2*i){
                cout<<"*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    
}