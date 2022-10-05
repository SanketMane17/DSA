// Why do we need to specify the column size when passing a 2D array as a parameter?
// --> 
// When passing a two-dimensional array to a function, you must specify the number of columns as a constant when you write the parameter type, so the compiler can pre-calculate the memory addresses of individual elements.

# include<bits/stdc++.h>
using namespace std;

void print(int arr[][4], int row, int col) {
    for(int i = 0;i < row;i++) {
        for(int j = 0;j < col;j++) {
            cout<< arr[i][j] << " ";
        }
        cout<< endl;
    }
}

bool isPresent(int arr[][4], int target, int row, int col) {
    for(int i = 0;i < row;i++) {
        for(int j = 0;j < col;j++) {
            if(arr[i][j] == target) 
                return true;
        }
    }

    return false;
}

int main(){
    int arr[3][4] = {
        {2, 3, 5, 6},
        {3, 4, 7, 8},
        {6, 5, 3, 1}
    };

    // Take input from user
    // for(int i = 0;i < 3;i++) {
    //     for(int j = 0;j < 4;j++) {
    //         cin>> arr[i][j];
    //     }
    // }

    print(arr, 3, 4);
    cout<< endl;

    if(isPresent(arr, 7, 3, 4)) {
        cout<< "Found in the array" << endl;
    } else {
        cout<< "Not found in the arrray" << endl;
    }
    return 0;
}