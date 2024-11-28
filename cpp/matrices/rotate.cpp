#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> arr(n, vector<int>(n, 0));
    int num = 1;

    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        // Traverse top row
        for (int i = left; i <= right; i++) {
            arr[top][i] = num++;
        }
        top++;

        // Traverse right column
        for (int i = top; i <= bottom; i++) {
            arr[i][right] = num++;
        }
        right--;

        // Traverse bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                arr[bottom][i] = num++;
            }
            bottom--;
        }

        // Traverse left column
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                arr[i][left] = num++;
            }
            left++;
        }
    }

    // Display the generated spiral matrix
    for (auto row : arr) {
        for (int val : row) {
            cout << val << "\t";
        }
        cout << endl;
    }

    return 0;
}
