// Input: nums = [3,2,2,3], val = 3
// Output: 2, nums = [2,2,_,_]
// Explanation: Your function should return k = 2, with the first two elements of nums being 2.
// It does not matter what you leave beyond the returned k (hence they are underscores).

# include<bits/stdc++.h>
using namespace std;

int removeElements(vector<int> &nums, int val) {

    // Using two pointers
    // TC - O(n)
    // SC - O(1)

    int left = 0, right = nums.size() - 1;
    while(left <= right) {
        if(nums[right] == val) {
            right--;
            continue;
        }
        
        if(nums[left] == val) {
            swap(nums[left], nums[right]);
        }
        left++;
    }
    return left;

    // Another approch
    // int index = 0;
    // for(int i = 0;i < nums.size();i++) {
    //     if(nums[i] != val) {
    //         swap(nums[i], nums[index++]);
    //     }
    // }
    
    // return index;
}

int main(){
    vector<int> arr = {3,2,2,3};
    int val = 3;

    int index = removeElements(arr, val);
    for(int i = 0;i < index;i++) {
        cout<< arr[i] << " " ;
    }
    return 0;
}