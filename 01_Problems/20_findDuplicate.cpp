# include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findDuplicate(vector<int> &arr) {

    // Optimized code - 1
    // TC - O(n)
    // SC - O(1)
    
    // int ans = 0;
    
    // for(int i = 0;i < arr.size();i++) {
    //     ans = ans ^ arr[i];
    // }
    
    // for(int i = 1;i < arr.size();i++) {
    //     ans = ans ^ i;
    // }

    // Another approch
    // TC - O(n)
    // SC - O(1)

    for(int i = 0;i < arr.size();i++) {
        int val = abs(arr[i]);

        if(arr[val - 1] >= 0)
            arr[val - 1] = -arr[val - 1];
        else 
            return val;
    }

    // Another approch
    // TC - O(n * logn)

    // sort(arr.begin(), arr.end());

    // for(int i = 0;i < arr.size();i++) {
    //     if(arr[i] == arr[i+1]) {
    //         return arr[i];
    //     }
    // }

    // O(n^2) => Time complexity

    // for(int i = 0;i < size;i++) {
    //     for(int j = i+1;j < size;j++) {
    //         if(arr[i] == arr[j])
    //             return arr[i];
    //     }
    // }

    // return ans;
}

int main(){
    vector<int>arr = {1, 2, 3, 3, 4, 3};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<< "Duplicate = " << findDuplicate(arr) << endl;
    return 0;
}