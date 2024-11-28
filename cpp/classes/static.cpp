#include<iostream>
using namespace std;
class abc{
    int a;
    static int b;
    public:
    void init(int i,int j){
        a=i;
        b=j;
    }
    void show(){
        cout<<a<<" "<<b<<endl;
    }
};int abc::b;    //without this throws error: unreference to variable b
int main(){
    abc s1,s2;
    s1.init(1,2);
    s1.show();
}