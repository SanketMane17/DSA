// Input:
// N = 5
// arr[] = {2, 3, 2, 3, 5}
// Output:
// 0 2 2 0 1
// Explanation: 
// Counting frequencies of each array element
// We have:
// 1 occurring 0 times.
// 2 occurring 2 times.
// 3 occurring 2 times.
// 4 occurring 0 times.
// 5 occurring 1 time.

#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr) {
    int n = arr.size();
    for(int i = 0;i < n;i++)
        cout<< arr[i] << " ";
}

void frequencyCount(vector<int> &arr, int n)
{
    // TC - O(n)
    // SC - O(n)

    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++)
        mpp[arr[i]]++;

    for (int i = 0; i < n; i++) {
       if(mpp.find(i + 1) != mpp.end()) {
            arr[i] = mpp[i+1];
       } else {
            arr[i] = 0;
       }
    }
}

int main()
{
    // vector<int> arr = {2, 3, 2, 3, 5};
    vector<int> arr = {3,2, 2, 2, 1};
    int n = arr.size();

    frequencyCount(arr, n);
    
    printArray(arr);
    return 0;
}