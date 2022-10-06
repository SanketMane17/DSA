// Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

// Integers in each row are sorted from left to right.
// The first integer of each row is greater than the last integer of the previous row.

# include<bits/stdc++.h>
using namespace std;

// TC - O(log(m * n))

bool seachIn2D(vector<vector<int>> &matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();

    int start = 0, end = (m * n) - 1;
    
    while(start <= end) {
        int mid = start + (end - start) / 2;
        int element = matrix[mid / n][mid % n];

        if(element == target)
            return true;
        else if(element > target)
            end = mid - 1;
        else   
            start = mid + 1;
    }
    return false;
}

int main(){
    vector<vector<int>> matrix = {
        {1,3,5,7},
        {0,11,16,20},
        {23,30,34,60}
    };
    int target = 3;

    bool res = seachIn2D(matrix, target);
    cout<< (res ? "Found" : "Not found") << endl;
    return 0;
}