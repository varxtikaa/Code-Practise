#include<bits/stdc++.h>
using namespace std;

int uglyNumber(int n) {
    if(n<=0) return 0;

    vector<int> v(n);
    int a = 0 , b = 0 , c = 0;
    v[0] = 1;

    for(int i = 1; i<n ; i++) {
        int num = min({v[a]*2,v[b]*3,v[c]*5});
        v[i] = num;

        if(num == v[a]*2)
        a++;

        if(num == v[b]*3)
        b++;

        if(num == v[c]*5)
        c++;
    }

    return v[n-1];
}

int main() {
    int n;
    cin>>n;
    int uglyNo = uglyNumber(n);

    cout<<uglyNo;
}