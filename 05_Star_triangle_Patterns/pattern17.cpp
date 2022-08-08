/*
    D 
    C D
    B C D 
    A B C D 
*/

# include<iostream>
using namespace std;

int main(){
     int n, row = 1;
    cout<< "Enter n = ";
    cin>> n;

    while(row <= n){
        int col = 1;
        char start = ('A' + n - row); // Start of row
        while(col <= row){
            cout<< start << " ";
            start = start + 1;
            col = col + 1;
        }
        cout<< endl;
        row = row + 1;
    }
    return 0;
}