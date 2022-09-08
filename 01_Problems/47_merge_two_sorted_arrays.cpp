
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void mergeArrays(vector<int> &nums1, int m, vector<int> &nums2, int n)
{

    // Merge into same given array
    // m = 4, nums1[] = [1 3 5 7] 
    // n = 5, nums2[] = [0 2 6 8 9]
    // Output: 
    // nums1[] = [0 1 2 3]
    // nums2[] = [5 6 7 8 9]


    int i = m - 1;
    int j = 0;
    while(i >= 0 && j < n) {
        if(nums1[i] > nums2[j])
            swap(nums1[i], nums2[j]);
        i--;j++;
    }

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    for(int i = 0;i < m;i++) 
        cout<< nums1[i] << " ";
    cout<< endl;
    for(int i = 0;i < n;i++) 
        cout<< nums2[i] << " ";


    // Better approach <-- Into single array
    // TC - O(n)
    // SC - O(1)
    
    // int i = m - 1, j = n - 1, index = m + n - 1;
    // while (i >= 0 && j >= 0) {
    //     if (nums1[i] > nums2[j])
    //         nums1[index--] = nums1[i--];
    //     else
    //         nums1[index--] = nums2[j--];
    // }

    // while (i >= 0)
    //     nums1[index--] = nums1[i--];
    // while (j >= 0)
    //     nums1[index--] = nums2[j--];

    // Another approach
    // TC - O(n)
    // SC - O(n)
    // vector<int> ans;

    // int i = 0, j = 0;
    // while(i < m || j < n) {
    //     if(i < m && j < n) {
    //         if(nums1[i] <= nums2[j]) {
    //             ans.push_back(nums1[i]);
    //             i++;
    //         } else if(nums1[i] >= nums2[j]) {
    //             ans.push_back(nums2[j]);
    //             j++;
    //         }
    //     }
    //     else if(i == m) {
    //         ans.push_back(nums2[j]);
    //         j++;
    //     }
    //     else if(j == n) {
    //         ans.push_back(nums1[i]);
    //         i++;
    //     }
    // }

    // nums1.clear();
    // for(int i = 0;i < (m+n);i++) {
    //     nums1.push_back(ans[i]);
    // }

    // for (int i = 0; i < (m + n); i++)
    // {
    //     cout << nums1[i] << " ";
    // }
}

int main()
{
    // vector<int> nums1 = {1, 2, 3};
    // vector<int> nums2 = {2, 5, 6};
    vector<int> nums1 = {1, 3, 5, 7};
    vector<int> nums2 = {0, 2, 6, 8, 9};

    int m = nums1.size();
    int n = nums2.size();

    mergeArrays(nums1, m, nums2, n);
    return 0;
}