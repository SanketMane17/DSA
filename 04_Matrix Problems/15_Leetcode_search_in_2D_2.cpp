// Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom

#include <bits/stdc++.h>
using namespace std;

// bool binarySearch(vector<int> arr, int target) {
//     int start = 0, end = arr.size() - 1;

//     while(start <= end) {
//         int mid = start + (end - start) / 2;

//         if(arr[mid] == target)
//             return true;
//         else if(arr[mid] > target)
//             end = mid - 1;
//         else 
//             start = mid + 1;
//     }
//     return false;
// }

bool searchMatrix(vector<vector<int>> &matrix, int target)
{

    int row = matrix.size();
    int col = matrix[0].size();

    int rowIndex = 0;
    int colIndex = col - 1;

    while(rowIndex < row && colIndex >= 0) {
        int element = matrix[rowIndex][colIndex];

        if(element == target)
            return true;
        else if(element < target)
            rowIndex++;
        else    
            colIndex--;
    }
    return false;

    // TC - O(n * logn)

    // int i = 0;
    // while(i < row) {
    //     if(binarySearch(matrix[i], target))
    //         return true;
    //     i++;
    // }
    // return false;

    // TC - O(n^2)

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         if (matrix[i][j] == target)
    //             return true;
    //     }
    // }
    // return false;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15}, 
        {2, 5, 8, 12, 19}, 
        {3, 6, 9, 16, 22}, 
        {10, 13, 14, 17, 24}, 
        {18, 21, 23, 26, 30}
    };
    int target = 10;

    bool res = searchMatrix(matrix, target);
    cout<< (res ? "Found" : "Not found") << endl;
    return 0;
}