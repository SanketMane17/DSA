// Input-
// 1 1 1
// 1 0 1
// 1 1 1

// Output-
// 1 0 1
// 0 0 0
// 1 0 1

// here row=1, col=1 have zero, then make entire row=1, col=1 as zero's

#include <iostream>
#include <vector>
using namespace std;

void printMatrix(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void setMatrixRowColZeros(vector<vector<int>> &matrix)
{

    int m = matrix.size();
    int n = matrix[0].size();

    vector<bool> row(m, false);
    vector<bool> col(n, false);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = true;
                col[j] = true;
            }
        }
    }

    for(int i = 0;i < m;i++) {
        cout<< row[i] << " ";
    } cout<< endl;

     for(int i = 0;i < n;i++) {
        cout<< col[i] << " ";
    } cout<< endl;

   for (int i = 0;i < m;i++) {
        for (int j = 0;j < n;j++) {
            if (row[i] == 1 || col[j] == 1)
            matrix[i][j] = 0;
        }
    }

}

int main()
{

    // vector<vector<int>> matrix = {
        // {1, 1, 1},
        // {1, 0, 1},
        // {1, 1, 1}};
    vector<vector<int>> matrix = {
        {0, 1, 2, 0},
        {3, 4, 5, 2},
        {1, 3, 1, 5}};

    printMatrix(matrix);

    cout<< endl;
    setMatrixRowColZeros(matrix);
    cout<< endl;
    printMatrix(matrix);

    return 0;
}
