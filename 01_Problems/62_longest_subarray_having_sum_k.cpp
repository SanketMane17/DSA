# include<iostream>
# include<vector>
#include<unordered_map>
using namespace std;

int longestSubArrayLen(vector<int> nums, int k) {

    unordered_map<int, int> mpp;
    int currSum = 0;
    int len = 0, maxLen = 0;
    
    // For edge case
    mpp[0] = -1;
    
    for(int i = 0;i < nums.size();i++) {
        currSum += nums[i];
        
        if(currSum == k){
            len++;
        }
        
        if(mpp.find(currSum - k) != mpp.end()) {
            len = i - mpp[currSum - k];
        }
        
        maxLen = max(len, maxLen);
        mpp[currSum] = i;
    }
    return maxLen;
}

int main(){
    vector<int> arr = {10,5, 3, 3, 3, 2, 1, 2, 1, 7, 9};
    int k = 15;
    // vector<int> arr = {-5, 8, -14, 2, 4, 12};
    // int k = -5;

    int res = longestSubArrayLen(arr, k);

    cout<< res << endl;
    return 0;
}