#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findAllDuplicates(vector<int> &arr)
{

    // Another approach
    // TC - O(n)
    // SC - O(n)
    
    // int n = arr.size();
    // vector<int> res;

    // for (int i = 0; i < n; i++){
    //     int index = (arr[i] % n);
    //     // cout<< arr[i] << "%" << n << " = " << index << endl;
    //     arr[index] += n;
    // }

    // for (int i = 0; i < n; i++) {
    //     cout<< arr[i] << "/" << n << "=" << arr[i]/n << endl;
    //     if (arr[i] / n >= 2)
    //         res.push_back(i);
    // }

    // if (res.size() == 0)
    //     return {-1};
    // return res;

    // Better solution [But not passed test-cases]
    vector<int> ans;
    for(int i=0;i<arr.size();i++){

        int val = abs(arr[i]);

        if(arr[val - 1] >= 0) { // if is positive
            arr[val - 1] = -arr[val - 1]; // make negative
        } else { // if already negative
            return val;
        }
    }

    // if(ans.size() == 0) return {-1};
    // return ans;

    // Brute force approch

    // sort(nums.begin(), nums.end());

    // vector<int> ans;
    // for(int i = 0;i < nums.size();i++) {
    //     cout<< "Outer" << endl;
    //     if(nums[i] == nums[i+1]) {
    //         ans.push_back(nums[i]);
    //     }
    // }

    // return ans;
}

int main()
{
    // vector<int> arr = {4,3,2,7,8,2,3,1};
    vector<int> arr = {1, 2, 3, 3, 4, 3};
    // vector<int> arr = {13, 9, 25, 1, 1, 0, 22, 13, 22, 20, 3, 8, 11, 25, 10, 3, 15, 11, 19, 20, 2, 4, 25, 14, 23, 14};

    // vector<int> ans = findAllDuplicates(arr);
    cout<< findAllDuplicates(arr) << endl;

    // for (int i = 0; i < ans.size(); i++)
    // {
        // cout << ans[i] << " ";
    // }

    return 0;
}