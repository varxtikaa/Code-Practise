#include<iostream>
using namespace std;
void update(string s[][3],string old,string new_nm){
        for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(s[i][j]==old)
            s[i][j]=new_nm;
        }
    }
}
void display(string s[][3]){
        for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<s[i][j]<<" ";
        }
    }
}
int main(){
    string name[][3]={"John","Hopkins"};
    update(name,"Hopkins","Smith");
    display(name);
}