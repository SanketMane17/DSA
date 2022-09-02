#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;

void uniqueElements(int *arr, int n)
{
    // TC - O(n)
    // SC - O(n)
    
    unordered_map<int, int> mpp;

    for(int i = 0;i < n;i++) {
       mpp[arr[i]]++;
    }

    for(auto it: mpp) {
        if(it.second == 1) {
            cout<< it.first << " ";
        }
    }   
}

int main()
{
    int arr[] = {1, 1, 1, 3, 2, 3, 4, 5, 5};
    // Output - 2 4
    int size = sizeof(arr) / sizeof(arr[0]);

    uniqueElements(arr, size);
    return 0;
}