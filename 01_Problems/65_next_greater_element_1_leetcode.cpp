// Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
// Output: [-1,3,-1]
// Explanation: The next greater element for each value of nums1 is as follows:
// - 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
// - 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
// - 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.

# include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

    // Optimization - Using unordered_map and stack
    // TC - O(n)
    // SC - O(n)
    
    unordered_map<int,int>umap;
    stack<int>st;
    int n = nums2.size();
    
    for(int i=n-1; i>=0; i--){
        while(!st.empty() && st.top() <= nums2[i]){
            st.pop();
        }
        int res = (st.empty()) ? -1 : st.top();
        umap[nums2[i]] = res;
        st.push(nums2[i]);
    }
    
    vector<int> ans;
    for(auto x: nums1){
        ans.push_back(umap[x]);
    }
    
    return ans;


    // TC - O(n^2)
    // SC - O(nums2.size)

    // vector<int> ans;
    // for(int i = 0;i < nums1.size();i++) {
    //     for(int j = 0;j < nums2.size();j++) {
    //         if(nums1[i] == nums2[j]) {
    //             int k;
    //             for(k = j + 1;k < nums2.size();k++) {
    //                 if(nums2[j] < nums2[k]) {
    //                     ans.push_back(nums2[k]);
    //                     break;
    //                 } 
    //             }

    //             if(k == nums2.size()) {
    //                 ans.push_back(-1);
    //                 break;
    //             }
    //         }
    //     }
    // }
    // return ans;
}

int main(){
    
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};

    vector<int> ans = nextGreaterElement(nums1, nums2);
    for(int i = 0;i < ans.size();i++) {
        cout<< ans[i] << " ";
    }
    return 0;
}