/*
    1
    2 3 
    3 4 5 
    4 5 6 7
*/

# include<iostream>
using namespace std;

int main(){
    int n, row = 1;
    cin>> n;

    // 1st approch using another variable
    // while(row <= n) {
    //     int col = 1, value = row;
    //     while(col <= row) {
    //         cout<< value;
    //         value++;
    //         col++;
    //     }
    //     cout<< endl;
    //     row++;
    // }

    // 2nd approch not using another vaiable
    while(row <= n) {
        int col = 1;
        while(col <= row) {
            cout<< row + col -1 << " ";
            col++;
        }
        cout<< endl;
        row++;
    }
    return 0;
}