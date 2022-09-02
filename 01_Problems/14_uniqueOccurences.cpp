// Not solved 
// 1, 2, 2, 1, 1, 3
// 1 : 3
// 2 : 2
// 3 : 1

#include <iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

bool uniqueOccurrences(int *arr, int n) {

    // TC - O(n) + O(n) = O(n)
    // SC - O(n)
    
    unordered_map<int, int> mpp; // Space - O(n)

    for(int i = 0;i < n;i++) { // Time - O(n)
        mpp[arr[i]]++;
    }

    unordered_set<int> set; // Space - O(n)
    for(auto it: mpp) { // Time - O(n)
        if(set.find(it.second) != set.end()) 
            return false;
        else 
            set.insert(it.second);
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 2, 1, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<< uniqueOccurrences(arr, size) << endl;;
    return 0;
}