// arr = {1, 2, 3, 7, 9} -> sorted array
// arr = {7, 9, 1, 2, 3} -> rotated and sorted array
// key = 2

// o/p = 3 [index of 2]
// steps : 
// 1] find pivot element
// 2] check cond'n for where the elmenet lies i.e first or second line in graph representation
// 3] apply binary search on that line and return index

# include<iostream>
# include<vector>
using namespace std;

int getPivot(vector<int> arr, int n) {
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;

    while(s < e) {
        if(arr[mid] >= arr[0]) 
            s = mid + 1;
        else 
            e = mid;
        
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(vector<int> arr, int start, int end, int k) {
    int s = start, e = end;
    int mid = s + (e - s);

    while(s <= e) {
        if(k == arr[mid])
            return mid;
        else if(k > arr[mid])
            s = mid + 1;
        else 
            e = mid - 1;
        
        mid = s + (e - s) / 2;
    }
    return -1;
}

int searchInRotatedSortedArray(vector<int> arr, int n, int k) {
    
    int pivot = getPivot(arr, n);
    if(k >= arr[pivot] && k <= arr[n - 1])
        return binarySearch(arr, pivot, n - 1, k);
    else 
        return binarySearch(arr, 0, pivot - 1, k);
}

int main(){
    // vector<int> arr = {7, 9, 1, 2, 3};
    vector<int> arr = {2};
    int n = arr.size();
    int k = 2;

    int res = searchInRotatedSortedArray(arr, n, k);
    cout<< "Index of " << k << " = " << res << endl;
    return 0;
}