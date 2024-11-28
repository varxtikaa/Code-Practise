#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

class heap{
    public:
    int arr[100];
    int size = 0;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size+=1;
        arr[size] = val;
        int i = 1;

        while(i < size) {
            int parent = i/2;

            if(arr[parent] > arr[i]) {
                swap(arr[i],arr[parent]);
            }
            else{
                return;
            }
        }
    }

    void print() {
        for(int i=1 ; i<size ; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

void heapify(int arr[] , int n , int i) {
    int smallest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left < n && arr[smallest] > arr[left]){
        smallest = left;
    }
    if(right < n && arr[smallest] > arr[right]){
        smallest = right;
    }

    if(smallest != i) {
        swap(arr[smallest],arr[i]);
        heapify(arr,n,smallest);
    }
}

int main() {
    int arr[7] = {-1,1,3,6,5,9,8};
    int n = 6;
    for(int i=n/2;i>0;i--) {
        heapify(arr,n,i);
    }

    for(int i=1;i<=n;i++) {
        cout<<arr[i]<<" ";
    }
}