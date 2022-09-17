// Input: nums = [2,3,-2,4]
// Output: 6
// Explanation: [2,3] has the largest product 6.

// Input: nums = [-2,0,-1]
// Output: 0
// Explanation: The result cannot be 2, because [-2,-1] is not a subarray.

# include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> nums) {

    // TC - O(n^2)
    // SC - O(1)
    // Given TLE --> Not efficient
    
    int n = nums.size();
    if(n == 1)
        return nums[0];
    int maxProduct = INT_MIN;
    
    for(int i = 0;i < n;i++) {
        int currProduct = 1;

        for(int j = i;j < n;j++) {
            currProduct *= nums[j];
            maxProduct = max(maxProduct, currProduct);
        }
    }
    return maxProduct;
}

int main(){
    
    return 0;
}