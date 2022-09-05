# include<bits/stdc++.h>
# include<set>
# include<vector>
using namespace std;

vector<int> arrayIntersection(vector<int> &nums1, vector<int>& nums2) {

    // If array's are not sorted
    // TC - O(n * log n)
    // SC - O(n)

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    // If array's are already sorted
    // TC - O(n)
    // SC - O(n)

    set<int> s;
    vector<int> ans;
    int i = 0, j = 0;
    while(i < nums1.size() && j < nums2.size()) {
        if(nums1[i] < nums2[j]) {
            i++;
        } else if(nums1[i] == nums2[j]) {
            s.insert(nums1[i]);
            i++;j++;
        } else {
            j++;
        }
    }
    
    for(auto i: s)
        ans.push_back(i);

    return ans;

    // TC - O(n^2)
    // SC - O(n)
    // vector<int> newVec;
    // set<int> s;
    // for(int i = 0;i < nums1.size();i++) {
    //     for(int j = 0;j < nums2.size();j++) {
    //        if(nums1[i] == nums2[j])
    //         s.insert(nums1[i]);
    //     }
    // }

    // for(auto i : s)
    //     newVec.push_back(i);
    // return newVec;
}

int main(){
    // vector<int>arr1 = {1,2,3,4};
    // vector<int>arr2 = {2,2,3,3};
    vector<int>arr1 = {1, 2, 2, 1};
    vector<int>arr2 = {2,2};
    // vector<int>arr1 = {4, 9, 5};
    // vector<int>arr2 = {9,4,9,8,4};

    vector<int> output = arrayIntersection(arr1, arr2);
    
    for(int i = 0;i < output.size();i++) {
        cout<< output[i] << " ";
    }
    return 0;
}