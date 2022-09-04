// Input: nums = [3,0,1]
// Output: 2
// Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

# include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {

    // TC - O(n)
    // SC - O(1)
    // expectedTot => Sum of first n natural numbers

    int sum = 0;
    int n = nums.size();
    int expectedTot = n * (n + 1) / 2;
    for(int i = 0;i < nums.size();i++)
        sum += nums[i];

    return expectedTot - sum;
    
    // TC - O(n)
    // SC - O(1)

    // set<int> s;
    // for(int i = 0; i < nums.size();i++) {
    //     s.insert(nums[i]);
    // }
    
    // for(int i = 0;i <= nums.size();i++) {
    //     if(s.find(i) == s.end()) {
    //         return i;
    //     }
    // }
    // return -1;

    // TC - O(n * logn) 
    // SC - O(1)

    // sort(nums.begin(), nums.end()); // 0, 1, 3

    // int temp = 0;
    // for(int i = 0;i < nums.size();i++) {
    //     if(nums[i] != temp)
    //         return temp;
    //     temp++;
    // }
    // return temp;
}

int main(){
    vector<int> nums = {3, 0, 1};
    // vector<int> nums = {9,6,4,2,3,5,7,0,1};
    // vector<int> nums = {0,1};

    int res = missingNumber(nums);
    cout<< res << endl;
    return 0;
}