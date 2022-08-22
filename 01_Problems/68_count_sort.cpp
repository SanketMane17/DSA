// Count sort is a sorting technique different from some of the other techniques like merge/quick sort.

// It tries to reduce the time complexity by using extra space.



#include <bits/stdc++.h>
using namespace std;

// For array of integers
void countSort(int n, vector<int> &arr){

    // TC -O(max(n, k))
    // SC - O(n + k)
    unordered_map<int, int> mpp;
    int k = arr[0];
    for(int i = 0;i < n;i++) {
        k = max(arr[i], k);
    }

    for(int i = 0;i < n;i++) {
        mpp[arr[i]]++;
    }

    // Modifying map
    for(int i = 1;i <= k;i++) {
        mpp[i] += mpp[i-1];
    }

    vector<int> output(n);

    for(int i = n - 1;i >= 0;i--) {
        output[--mpp[arr[i]]] = arr[i];
    }

    for(int i = 0;i < n;i++) {
        arr[i] = output[i];
    }
}

int main() {
    vector<int> arr = {1,3,2,3,4,1,6,4,3};
    int n = arr.size();

    countSort(n, arr);
    for(int i = 0;i < n;i++) {
        cout<< arr[i] << " ";
    }
    return 0;
}