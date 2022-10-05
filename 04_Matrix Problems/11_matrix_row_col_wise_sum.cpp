// Row wise
// 1 2 3 => 6
// 4 5 6 => 15
// 7 8 9 => 24

// Col wise
// 1  2  3
// 4  5  6
// 7  8  9
// |  |  |
// 12 15 18

# include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][4] = {
        {1, 2, 3, 3},
        {4, 5, 6, 5},
        {7, 8, 9, 6}
    };

    int n = 3, m = 4;


    cout<< "Row wise sum" << endl;;
    for(int i = 0;i < n;i++) {
        int sum = 0;
        for(int j = 0;j < m;j++) {
            sum += arr[i][j];
        }

        cout<< sum << endl;
    }
    cout<< endl;

    cout<< "Coloumn wise sum" << endl;
    for(int i = 0;i < n;i++) {
        int sum = 0;
        for(int j = 0;j < m;j++) {
            sum += arr[j][i];
        }

        cout<< sum << endl;
    }
    return 0;
}