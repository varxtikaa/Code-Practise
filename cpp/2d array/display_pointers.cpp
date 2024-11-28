#include<iostream>
using namespace std;
void update(string (*name)[3],string old_n,string new_n){
    string *ptr=nullptr;
    for(ptr=&name[0][0];ptr<=&name[1][2];ptr++){
        if(*ptr==old_n)
        *ptr=new_n;
    }
}
void display(string (*name)[3]){
    string *ptr=nullptr;
    for(ptr=&name[0][0];ptr<=&name[1][2];ptr++){
        cout<<*ptr<<" ";
    }
}
int main()
{
    string name[][3]={"John","Hopkins"};
    update(name,"John","William");
    display(name);
}