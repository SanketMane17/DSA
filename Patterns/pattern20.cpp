/*
    ****
     ***
      **
       *
*/

# include<iostream>
using namespace std;

int main(){
     int n, row = 1;
    cout<< "Enter n = ";
    cin>> n;

    while(row <= n){
        int col = 1;
        int space = row - 1;
        int star = n - row + 1;
        while(col <= row){
            // Print spaces
            while(space){
                cout<< " ";
                space--;
            }
            // Print stars 
            while(star){
                cout<< "*";
                star--;
            }
        col++;
        }
        cout<< endl;
        row = row + 1;
    }
    return 0;
}