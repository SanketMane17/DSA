/*
    A
    B C 
    C D E 
    D E F G 
*/

# include<iostream>
using namespace std;

int main(){
     int n = 4, row = 1;
    // cout<< "Enter n = ";
    // cin>> n;

    while(row <= n){
        int col = 1;
        while(col <= row){
            char ch = 'A' + row + col - 2;
            cout<< ch << " ";
            col = col + 1;
        }
        cout<< endl;
        row = row + 1;
    }
    return 0;
}