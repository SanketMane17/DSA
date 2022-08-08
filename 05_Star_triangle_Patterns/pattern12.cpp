/*
    A B C 
    D E F 
    G H I
*/

# include<iostream>
using namespace std;

int main(){
    int n, row = 1;
    cout<< "Enter n = ";
    cin>> n;
    char start = 'A';

    while(row <= n){
        int col = 1;
        while(col <= n){
            cout<< start << " ";
            start = start + 1;
            col = col + 1;
        }
        cout<< endl;
        row = row + 1;
    }
    return 0;
}