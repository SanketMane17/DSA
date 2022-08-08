/*
    1 
    2 1 
    3 2 1 
    4 3 2 1 
*/

# include<iostream>
using namespace std;

int main(){
    int n, row = 1;
    cout<< "Enter n = ";
    cin>> n;

    while(row <= n){
        int col = 1;
        while(col <= row){
            cout<< row - col + 1;
            col = col + 1;
        }
        cout<< endl;
        row = row + 1;
    }
    return 0;
}