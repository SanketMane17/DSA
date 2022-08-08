/*
       1   
      121  
     12321 
    1234321
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

        // Print space 
        while(space){
            cout<< " ";
            space--;
        }

        // Print first traingle
        while(col <= row){
            cout<< col;
            col = col + 1;
        }

        // Print second traingle
        int start = row - 1;
        while(start){
            cout<< start;
            start--;
        } 
        cout<< endl;
        row = row + 1;
    }
    return 0;
}