
# include<iostream>
# include<vector>
using namespace std;

void mergeArrays(vector<int> &nums1, int m, vector<int> &nums2, int n) {

    vector<int> ans;

    int i = 0, j = 0;
    while(i < m || j < n) {
        if(i < m && j < n) {
            if(nums1[i] <= nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            } else if(nums1[i] >= nums2[j]) {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        else if(i == m) {
            ans.push_back(nums2[j]);
            j++;
        }
        else if(j == n) {
            ans.push_back(nums1[i]);
            i++;
        }
    }

    nums1.clear();
    for(int i = 0;i < (m+n);i++) {
        nums1.push_back(ans[i]);
    }
    for(int i = 0;i < (m+n);i++) {
        cout<< nums1[i] << " ";
    }
}

int main(){
    // vector<int> nums1 = {1, 2, 3};
    // vector<int> nums2 = {2, 5, 6};
    vector<int> nums1 = {0};
    vector<int> nums2 = {1};

    int m = nums1.size();
    int n = nums2.size();

    mergeArrays(nums1, m, nums2, n);
    return 0;
}