// Difference between primay and seconday diagonal sum

#include <iostream>
#include <vector>
using namespace std;

int diagonalDiff(vector<vector<int>> matrix)
{

    int n = matrix.size();
    int prim_sum = 0;
    int sec_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                prim_sum += matrix[i][j];
            
            if(i + j == n - 1) 
                sec_sum += matrix[i][j];
        }
    }

    return abs(prim_sum - sec_sum);
}

int main()
{

    vector<vector<int>> matrix{
        {1, 2, 3},
        {4, 5, 6},
        {9, 8, 9}};

    cout << diagonalDiff(matrix) << endl;
    return 0;
}