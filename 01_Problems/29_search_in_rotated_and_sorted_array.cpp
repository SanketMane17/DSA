// nums = {1, 2, 3, 7, 9} -> sorted array
// nums = {7, 9, 1, 2, 3} -> rotated and sorted array
// key = 2

// o/p = 3 [index of 2]
// steps :
// 1] find pivot element
// 2] check cond'n for where the element lies i.e first or second line in graph representation
// 3] apply binary search on that line and return index

#include <iostream>
#include <vector>
using namespace std;

int getPivot(vector<int> nums, int n) { // O(logn)
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;

    while(start < end) {
        if(nums[mid] > nums[mid + 1]) 
            return mid;
        else if(nums[mid] >= nums[0])
            start = mid + 1;
        else    
            end = mid - 1;

        mid = start + (end - start) / 2;
    }

    return -1;
}

int binarySearch(vector<int> nums, int start, int end, int k) { // O(logn)
    int s = start, e = end;
    int mid = s + (e - s);

    while(s <= e) {
        if(k == nums[mid])
            return mid;
        else if(k > nums[mid])
            s = mid + 1;
        else
            e = mid - 1;

        mid = s + (e - s) / 2;
    }
    return -1;
}

// TC - O(logn)
// SC - O(1)

int search(vector<int> nums, int k) {

    int n = nums.size();
    int pivot = getPivot(nums, n);

    cout<< "Pivot = " << pivot << endl;

    // Crio approach

    if(pivot == -1) 
        return binarySearch(nums, 0, n - 1, k);

    else if(nums[pivot] == k)
        return pivot;

    else if(nums[0] < k) // nums[0] is deciding factor
        return binarySearch(nums, 0, pivot - 1, k);
    else 
        return binarySearch(nums, pivot + 1, n - 1, k);

    // Love babbar approach
    // if(k >= nums[pivot] && k <= nums[n - 1])
    //     return binarySearch(nums, pivot, n - 1, k);
    // else
    //     return binarySearch(nums, 0, pivot - 1, k);
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