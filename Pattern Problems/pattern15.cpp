/*
    A
    B C 
    D E F 
    G H I J
*/

# include<iostream>
using namespace std;

int main(){
     int n, row = 1;
    cout<< "Enter n = ";
    cin>> n;
    char cnt = 'A';

    while(row <= n){
        int col = 1;
        while(col <= row){
            cout<< cnt << " ";
            cnt = cnt + 1;
            col = col + 1;
        }
        cout<< endl;
        row = row + 1;
    }
    return 0;
}