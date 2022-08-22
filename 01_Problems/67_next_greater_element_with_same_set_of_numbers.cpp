// Input:  n = "218765"
// Output: "251678"

// Input:  n = "1234"
// Output: "1243"

// Input: n = "4321"
// Output: "Not Possible"

// Input: n = "534976"
// Output: "536479"

// Observation: 
// 1] If all digits sorted in descending order, then output is always “Not Possible”. For example, 4321. 
// 2] If all digits are sorted in ascending order, then we need to swap last two digits. For example, 1234. 
// 3] For other cases, we need to process the number from rightmost side (why? because we need to find the smallest of all greater numbers)

# include<bits/stdc++.h>
using namespace std;

int nextPermutation(int n)
{
    vector<int> arr; // []

    // Converting number to array
    while(n != 0) {
        int digit = n % 10;
        arr.push_back(digit);
        n /= 10;
    } // [2, 1]

    reverse(arr.begin(), arr.end()); // [1, 2]

    // Start from the right most digit and find the first
    // digit that is smaller than the digit next to it.
    int i = 0;
    for (i = arr.size() - 1; i > 0; i--) {
        if (arr[i] > arr[i - 1])
            break;
    }

    // cout<< i << endl;

    // If there is a possibility of a next greater element
    if (i != 0) {
        // Find the smallest digit on right side of (i-1)'th
        // digit that is greater than number[i-1]
        for (int j = arr.size() - 1; j >= i; j--) {
            if (arr[i - 1] < arr[j]) {
                // Swap the found smallest digit i.e. arr[j]
                // with arr[i-1]
                swap(arr[i - 1], arr[j]);
                break;
            }
        }
    } else {
        return -1;
    }
    
    // Reverse the digits after (i-1) because the digits
    // after (i-1) are in decreasing order and thus we will
    // get the smallest element possible from these digits
    reverse(arr.begin() + i, arr.end());
        
    int res = 0;
    for(int i = 0;i < arr.size();i++) {
        res = (res * 10) + arr[i];
    }

    return res;
}

int main(){
    // int n = 12;
    // int n = 9876543;
    int n = 1234;
    // int n = 218765;

    int res = nextPermutation(n);
    cout<< res << endl;
    return 0;
}
