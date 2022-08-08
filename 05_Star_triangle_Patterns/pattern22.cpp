/*
       1
      22
     333
    4444
*/

# include<iostream>
using namespace std;

int main(){
     int n, row = 1;
    cout<< "Enter n = ";
    cin>> n;

    while(row <= n){
        int col = 1;
        int space = n - row;
        int value = row;
        while(space){
            cout<< " ";
            space--;
        }
        while(col <= row){
            cout<< value;
            col = col + 1;
        }
        cout<< endl;
        row = row + 1;
    }
    return 0;
}