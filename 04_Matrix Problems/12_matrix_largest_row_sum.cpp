// 1 2 3 => 6
// 4 5 6 => 15
// 7 8 9 => 24

// Largest row sum = 24 = row -> 2;

# include<bits/stdc++.h>
using namespace std;

int largestRowSum(int arr[][3], int row, int col) {

    int maxSum = -1;
    int index;
    for(int i = 0;i < row;i++) {
        int sum = 0;
        for(int j = 0;j < col;j++) {
            sum += arr[i][j];
        }

        if(sum > maxSum) {
            index = i;
            maxSum = sum;
        }
    }

    return index;
}

int main(){
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int row = largestRowSum(arr, 3, 3);
    cout<< row << endl;
    return 0;
}