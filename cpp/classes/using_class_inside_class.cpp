#include<iostream>
using namespace std;
class a{
    int sno;
    string name;
    public:
    void set(string n,int s){
    name=n;
    sno=s;
    }
};
class b{
    a temp;
    public:
    void add(string n,int s){
        temp.set(n,s);
    }
};
int main(){
    b info1;
    info1.add("Vartika",100);
}