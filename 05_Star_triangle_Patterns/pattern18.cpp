/*
       *
      **
     ***
    ****
*/

# include<iostream>
using namespace std;

int main(){
     int n, row = 1;
    cout<< "Enter n = ";
    cin>> n;

    while(row <= n){
        int space = n - row;
        while(space){
            cout<< " ";
            space = space - 1;
        }

        int col = 1;
        while(col <= row){
            cout<< "*";
            col = col + 1;
        }
        cout<< endl;
        row = row + 1;
    }
    return 0;
}