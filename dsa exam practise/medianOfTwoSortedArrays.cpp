#include<bits/stdc++.h>
using namespace std;

int main() {
        vector<int> nums1={1,2},nums2={3,4};
        double median;
        int id=0;
        for(int i:nums1) {
            nums1.push_back(nums2[id++]);
        }
        sort(nums1.begin(),nums1.end());
        //agar odd hai
        int n=nums1.size();
        if(n%2 != 0) {
            int medianTerm = (n+1)/2;
            median = nums1[medianTerm];
        }
        //agar even hai
        else{
            int m1 = n/2;
            int m2 = (n/2)+1;
            median = (m1+m2)/2.0;
        }

        cout<<median;
}