// Sample Input 1
// 1 5 9
// 10 11 13
// 12 13 15

// k = 8

// Sample Output 1
// 13

// Explanation 1
// If written in non-decreasing order, elements are,
// 1 5 9 10 11 12 13 13 15
// Hence, 8th smallest element is 13.

# include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int x) {
    int n = arr.size();

    int start = 0, end = n - 1;
    int count = 0;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(x >= arr[mid]) {
            count = mid + 1;
            start = mid + 1;
        } else if(x < arr[mid]) {
            end = mid - 1;
        }
    }
    return count;
}

int rankMid(vector<vector<int>> matrix, int mid) {

    int n = matrix.size();
    int cnt = 0;

    for(int i = 0;i < n;i++) {
        cnt += binarySearch(matrix[i], mid);
    }
    return cnt;
}

int kthSmallestElementInMatrix(vector<vector<int>> matrix,int k)
{
    // Optimasation - Binary Search

    // TC - O(n) - not understood properly
    // SC - O(1)

    int low = matrix[0][0], n = matrix.size(), high = matrix[n-1][n-1],mid;
       
    while(low<high){
        mid = low + (high-low)/2;
        int count=0;
        for(int i=0;i<n;i++){
            count += upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
        }
        if(count<k){
            low = mid+1;
        } else {
            high = mid;
        }
    }
    
    return low;

    // TC - O(logn * NlogN)

    // int n = matrix.size();
    // int start = matrix[0][0];
    // int end = matrix[n - 1][n - 1];
    // int ans = 0;

    // while(start <= end) {
    //     int mid = start + (end - start) / 2;

    //     // Rank is the key (suppose)
    //     if(rankMid(matrix, mid) >= k) {
    //         ans = mid; 
    //         end = mid - 1;
    //     } else {
    //         start = mid + 1;
    //     }
    // }
    // return ans;

    // TC - O(n^2 * logn^2)
    // SC - O(n^2)

    // vector<int> newArr;
    // for(int i = 0;i < matrix.size();i++)
    //     for(int j = 0;j < matrix[i].size();j++) 
    //         newArr.push_back(matrix[i][j]);
    
    // sort(newArr.begin(), newArr.end());
    
    // return newArr[k - 1];
}

int main(){

    vector<vector<int>> matrix = {
       {1, 5, 9},
       {10, 11, 13},
       {12, 13, 15}
    };

    int k = 8;
    int res = kthSmallestElementInMatrix(matrix, k);
    cout<< res << endl;
    return 0;
}