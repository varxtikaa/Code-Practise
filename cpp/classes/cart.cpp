/*
we have a cart
user is buying a product
product and its price will be added
add(product,price)
viewcart() shows all products with each price and at the end shows total price
*/
#include<iostream>
using namespace std;
class cart{
    string p_name[100];
    int price[100];
    static int n;
    public:
    void add(string pn,int pr);
    void viewcart();
};
int cart::n=0;
void cart::add(string pn,int pr){
    p_name[n]=pn;
    price[n]=pr;
    n++;
}
void cart::viewcart(){
    int total=0;
    for(int i=0;i<n;i++){
        cout<<p_name[i]<<" "<<price[i]<<endl;
        total+=price[i];
    }
    cout<<"Total value of cart: "<<total<<endl;
}
int main(){
    cart c1;
    c1.add("Laptop",40000);
    c1.add("iPhone",70000);
    c1.viewcart();
}