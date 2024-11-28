//make a class bank which has
//bank head and balance
//make four functions open(name,balance)
//deposit(amount)
//withdrawal(amount)
//checkabalnce() checks balance for all users
#include<iostream>
using namespace std;
class bank{
    string name;
    int balance;
    static int total_balance;
    public:
    void deposit(int bal);
    void withdrawal(int bal);
    int checkbalance();
    void openaccount(string n,int bal);
    void show(){
        cout<<name<<" "<<balance<<endl;
    }
};
int bank::total_balance=0;
void bank::openaccount(string n,int bal){
    name=n;
    balance=bal;
    total_balance+=balance;
}
void bank::deposit(int bal){
    balance+=bal;
    total_balance+=bal;
    }
void bank::withdrawal(int bal){
    if(bal<balance){
    balance-=bal;
    total_balance-=bal;
    }
    else
    cout<<"Insufficient Funds";
}
int bank::checkbalance(){
    cout<<total_balance;
}

int main(){
    bank user1,user2;
    user1.openaccount("Vartika",10000);
    user1.show();
    user1.deposit(500);
    user1.show();
    user1.withdrawal(500);
    user1.show();
    user2.openaccount("Vanshika",20000);
    user2.show();
    user1.checkbalance();
}