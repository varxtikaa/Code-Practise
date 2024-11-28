#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vect; //creates variable sized array
    vect.push_back(10); //adds element to vector
    vect.push_back(20);
    for(int x:vect){
        cout<<x<<" ";
    }
    cout<<"\n";

    int n=4;
    vector<int> v2(n,10); //will have n elements as '10'
    for(int x: v2){
        cout<<x<<" ";
    }
    cout<<"\n";

    vector<int> v3{1,2,3,4,5,6,7};
    for(int x:v3){
        cout<<x<<" ";
    }
    cout<<"\n";

}