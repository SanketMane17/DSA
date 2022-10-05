// Input:
// matrix = [
//           [1,2,3],
//           [4,5,6],
//           [7,8,9]
//           ]

// Output: [1,2,3,6,9,8,7,4,5]

#include <bits/stdc++.h>
using namespace std;

// TC - O(n * m)

vector<int> spiralOrder(vector<vector<int>> &matrix)
{

    int n = matrix.size();
    int m = matrix[0].size();
    int total = n * m;

    // cout<< n << " " << m << endl;

    int topRow = 0, bottomRow = n - 1;
    int leftCol = 0, rightCol = m - 1;
    int cnt = 0;

    vector<int> ans;
    while (cnt < total)
    {
        // We have to add cnt < total for all for loops because we must check everytime that cnt is less than total or not, otherwise the last or secondlast element will print twice
        for (int i = leftCol; cnt < total && i <= rightCol; i++)
        {
            ans.push_back(matrix[topRow][i]);
            cnt++;
        }
        topRow++;

        for (int i = topRow; cnt < total && i <= bottomRow; i++)
        {
            ans.push_back(matrix[i][rightCol]);
            cnt++;
        }
        rightCol--;

        for (int i = rightCol; cnt < total && i >= leftCol; i--)
        {
            ans.push_back(matrix[bottomRow][i]);
            cnt++;
        }
        bottomRow--;

        for (int i = bottomRow; cnt < total && i >= topRow; i--)
        {
            ans.push_back(matrix[i][leftCol]);
            cnt++;
        }
        leftCol++;
    }

    return ans;
}

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {4, 5, 6, 6},
        {7, 8, 9, 9}};

    vector<int> ans = spiralOrder(arr);
    for (auto i : ans)
        cout << i << " ";
    return 0;
}