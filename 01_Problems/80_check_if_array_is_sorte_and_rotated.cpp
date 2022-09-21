// Input: nums = [3,4,5,1,2]
// Output: true
// Explanation: [1,2,3,4,5] is the original sorted array.
// You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].

// Input: nums = [2,1,3,4]
// Output: false
// Explanation: There is no sorted array once rotated that can make nums.

# include<bits/stdc++.h>
using namespace std;

bool check(vector<int> arr) {
    int n = arr.size();
    int x = 0;

    for(int i = 1;i < n;i++) {
        if(arr[i - 1] > arr[i])
            x++;
    }

    if(arr[n - 1] > arr[0])
        x++;
    
    return x <= 1;
}

int main(){
    // vector<int> arr = {3, 4, 5, 1, 2};
    vector<int> arr = {2, 1, 3, 4};

    cout<< (check(arr) ? "Sorted and Rotated" : "Not Sorted and Rotated") << endl;
    return 0;
}