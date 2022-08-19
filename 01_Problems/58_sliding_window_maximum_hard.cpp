// Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
// Output: [3,3,5,5,6,7]
// Explanation: 
// Window position                Max
// ---------------               -----
// [1  3  -1] -3  5  3  6  7       3
//  1 [3  -1  -3] 5  3  6  7       3
//  1  3 [-1  -3  5] 3  6  7       5
//  1  3  -1 [-3  5  3] 6  7       5
//  1  3  -1  -3 [5  3  6] 7       6
//  1  3  -1  -3  5 [3  6  7]      7

# include<iostream>
# include<vector>
# include<deque>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {

    // Usind deque
    // TC - O(n)
    // SC - O(k);
    
    deque<int> dq;
    vector<int> ans;

    // first window
    for(int i = 0;i < k;i++) {
        while(!dq.empty() && dq.back() < nums[i]) {
            dq.pop_back();
        }
        dq.push_back(nums[i]);
    }

    ans.push_back(dq.front());

    for(int i = k;i < nums.size();i++) {

        if(dq.front() == nums[i - k]) 
            dq.pop_front();

        while(!dq.empty() && dq.back() < nums[i]) {
            dq.pop_back();
        }
        dq.push_back(nums[i]);
        ans.push_back(dq.front());
    }
    return ans;

    // Brute force
    // TC - O(n*k)
    // SC - O(k)
    // int maxElem = INT_MIN;
    // int n = nums.size();

    // vector<int> ans;

    // for(int i = 0;i <= n - k;i++) {
    //     for(int j = 0;j < k;j++) {

    //         maxElem = max(nums[i+j], maxElem);    
    //     }

    //     ans.push_back(maxElem);
    // }
    // return ans;
}

int main(){
    
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    int k = 3;

    vector<int> ans = maxSlidingWindow(nums, k);

    for(int i = 0;i < ans.size();i++) {
        cout<< ans[i] << " ";
    }
    return 0;
}