// // // #include<bits/stdc++.h>
// // // using namespace std;

// // // void mapping(map<int,int> &mp, int index, int n, vector<int> &arr, int curr) {
// // //     if(index>=arr.size()) return;
// // //     if(arr[index] == -1) return;

// // //     if(mp.find(curr) == mp.end()) mp[curr] = arr[index]; 

// // //     mapping(mp,index*2+1,n,arr,curr-1);
// // //     mapping(mp,index*2+2,n,arr,curr+1);
// // // }

// // // int main() {
// // //     int n;
// // //     cin>>n;
// // //     vector<int> arr(n);
// // //     for(int i=0;i<n;i++) cin>>arr[i];

// // //     map<int,int> mp;

// // //     mapping(mp,0,n,arr,0);

// // //     for(auto i:mp) {
// // //         cout<<i.second<<" ";
// // //     }
// // // }

// // #include <bits/stdc++.h>
// // using namespace std;

// // void mapping(map<int, int> &mp, int index, int n, vector<int> &arr, int curr) {
// //     if (index >= arr.size() || arr[index] == -1) return;

// //     if (mp.find(curr) == mp.end()) mp[curr] = arr[index];

// //     mapping(mp, index * 2 + 1, n, arr, curr - 1);
// //     mapping(mp, index * 2 + 2, n, arr, curr + 1);
// // }

// // int main() {
// //     vector<int> arr = {1, 2, 3, 4, 5};
// //     int n = arr.size();
// //     map<int, int> mp;

// //     mapping(mp, 0, n, arr, 0);

// //     for (auto i : mp) {
// //         cout << i.second << " ";
// //     }

// //     return 0;
// // }

// #include<iostream>
// #include<vector>
// #include<map>
// using namespace std;

// void maping(map<int,int>&mp,int index,int n,vector<int>&arr,int cur){
//     if(index>=arr.size() ) return;
//     if(arr[index]==-1) return;
//     if(mp.find(cur)==mp.end())mp[cur]=arr[index];
//     maping(mp,index*2+1,n,arr,cur-1);
//     maping(mp,index*2+2,n,arr,cur+1);

// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++) cin >> arr[i];
//     map<int,int>mp;
//     maping(mp,0,n,arr,0);
//     for(auto it:mp){
//         cout <<it.second<<" ";
//     }
// }//topview

#include <bits/stdc++.h>
using namespace std;

void mapping(map<int, int> &mp, int index, int n, vector<int> &arr, int curr) {
    if (index >= arr.size() || arr[index] == -1) return;

    if (mp.find(curr) == mp.end()) mp[curr] = arr[index];

    mapping(mp, index * 2 + 1, n, arr, curr - 1);
    mapping(mp, index * 2 + 2, n, arr, curr + 1);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    map<int, int> mp;

    mapping(mp, 0, n, arr, 0);

    for (auto i : mp) {
        cout << i.second << " ";
    }

    return 0;
}
