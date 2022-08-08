// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[7,4,1],[8,5,2],[9,6,3]]

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void print(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

void rotateMatrix(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    // Transpose of matrix
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
            swap(matrix[i][j], matrix[j][i]);

    // Reversing each row of matrix after transpose
    for (int i = 0; i < n; i++)
        reverse(matrix[i].begin(), matrix[i].end());
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout<< "Before rotate: " << endl;
    print(matrix);
    cout<< endl;

    cout<< "After rotate: " << endl;
    rotateMatrix(matrix);
    print(matrix);
    return 0;
}