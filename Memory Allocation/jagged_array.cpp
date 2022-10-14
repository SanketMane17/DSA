// Jagged array is array of arrays such that member arrays can be of different sizes, i.e., we can create a 2-D array but with a variable number of columns in each row. These type of arrays are also known as Jagged arrays.

// arr[][] = { {0, 1, 2},
//             {6, 4},
//             {1, 7, 6, 8, 9},
//             {5} 
//           };

# include<bits/stdc++.h>
using namespace std;

int main(){
    
    int row;
    cout<< "Enter the number of rows you want : ";
    cin>> row;
    int **jagArr = new int*[row];

    int *numbers = new int[row]; // array to store number of columns in each row
    for(int i = 0;i < row;i++) {
        cout<< "Enter number of columns in row " << i << " : ";
        cin>> numbers[i];
        jagArr[i] = new int[numbers[i]];
    }

    // Input values in jagged array
    for(int i = 0;i < row;i++) {
        for(int j = 0;j < numbers[i];j++) {
            cin>> jagArr[i][j]; // Enter total number of values in the jagged array
        }
    }

    // Printing values from jagged array
    for(int i = 0;i < row;i++) {
        for(int j = 0;j < numbers[i];j++) {
            cout<< jagArr[i][j] << " ";
        } cout<< endl;
    }
    return 0;
}