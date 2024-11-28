// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;  // taking size of the array

//     vector<int> arr(n);  // make array of size n

//     for (int i = 0; i < n; ++i) {  // taking input in array
//         cin >> arr[i];
//     }

//     // Create the exception message
//     string exception_message = to_string(n) + " [";
//     for (int i = 0; i < n; ++i) {
//         exception_message += std::to_string(arr[i]);
//         if (i < n - 1) {
//             exception_message += ", ";
//         }
//     }
//     exception_message += "]";

//     // Throw the exception with the message
//     throw runtime_error(exception_message);
//     return 0;


// }

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0 ; i <n ; i++) {
//         cin>>arr[i];
//     }

//     string exception_message = to_string(n)+" [";
//     for(int i=0 ; i<n ; i++) {
//         exception_message+=to_string(arr[i]);
//         if(i<n-1) {
//             exception_message+=',';
//         }
//     }

//     throw runtime_error(exception_message);
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++) {
        cin>>arr[i];
    }

    string exception_message = to_string(n)+" [";
    for(int i=0 ; i<n ; i++) {
        exception_message+=to_string(arr[i]);
        if(i<n-1) {
            exception_message+=';';
        }
    }
    exception_message+=']';

    throw runtime_error(exception_message);
}