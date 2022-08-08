#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> spiralMatrix(int n)
{
    vector<vector<int>> arr(n, vector<int>(n, 1));
    int cnt = 1;
    int topmostRow = 0, bottommostRow = n - 1;
    int leftmostCol = 0, rightmostCol = n - 1;

    while (topmostRow <= bottommostRow && leftmostCol <= rightmostCol) {
        for (int i = leftmostCol; i <= rightmostCol; i++) {
            arr[topmostRow][i] = cnt++;
        }   
        topmostRow++;

        for (int i = topmostRow; i <= bottommostRow; i++) {
           arr[i][rightmostCol] = cnt++;
        }
        rightmostCol--;

        for (int i = rightmostCol; i >= leftmostCol; i--) {
            arr[bottommostRow][i] = cnt++;
        }
        bottommostRow--;

        for (int i = bottommostRow; i >= topmostRow; i--) {
            arr[i][leftmostCol] = cnt++;
        }
        leftmostCol++;
    }

    return arr;
}

int main()
{

    int n = 3;
    vector<vector<int>> result = spiralMatrix(n);

    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
                cout << result[i][j] << " ";
        }
        cout << endl;
    }

    // spiralMatrix(n);
    return 0;
}