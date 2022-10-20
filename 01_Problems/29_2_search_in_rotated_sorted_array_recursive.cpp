#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& nums, int low, int high, int key)
{
    if (high < low)
        return -1;

    int mid = low + (high - low)/2;
    if (key == nums[mid])
        return mid;

    if (key > nums[mid])
        return binarySearch(nums, (mid + 1), high, key);

    return binarySearch(nums, low, (mid - 1), key);
}
    
// Function to get pivot. For num say 3, 4, 5, 6, 1, 2
// it returns 3 (index of 6)
int findPivot(vector<int>& nums, int low, int high)
{
    // Base cases
    if (high < low)
        return -1;
    if (high == low)
        return low;

    // low + (high - low)/2;
    int mid = low + (high - low)/2;
    if (mid < high && nums[mid] > nums[mid + 1])
        return mid;

    if (mid > low && nums[mid] < nums[mid - 1])
        return (mid - 1);

    if (nums[low] >= nums[mid])
        return findPivot(nums, low, mid - 1);

    return findPivot(nums, mid + 1, high);
}

// Searches an element key in a pivoted
int search(vector<int>& nums, int target)
{
    int n = nums.size();
    int pivot = findPivot(nums, 0, n - 1);

    // If we didn't find a pivot,
    // then numsay is not rotated at all
    if (pivot == -1)
        return binarySearch(nums, 0, n - 1, target);

    // If we found a pivot, then first compare with pivot
    // and then search in two subnumsays around pivot
    if (nums[pivot] == target)
        return pivot;

    if (nums[0] <= target)
        return binarySearch(nums, 0, pivot - 1, target);

    return binarySearch(nums, pivot + 1, n - 1, target);
}


int main()
{
    // vector<int> nums = {7, 9, 1, 2, 3};
    // vector<int> nums = {2};
    // vector<int> nums = {4, 5, 6, 9, 10, 2, 3};

    vector<int> nums = {1, 2, 3, 4, 7};
    int k = 1;

    // cout<< "Index of 1 = " <<  search(nums, 1) << endl;
    // cout<< "Index of 2 = " <<  search(nums, 2) << endl;
    int res = search(nums, k);
    cout << "Index of " << k << " = " << res << endl;
    return 0;
}