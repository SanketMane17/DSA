// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  **** 
// **********

# include<iostream>
using namespace std;

int main(){
    
    int n = 10;
    int row = 1;

    while(row <= n) {
        
        // First half
        int pos = n - row + 1;
        while(pos) {
            cout<< "*";
            pos--;
        }

        int space = (row - 1) * 2;
        while(space) {
            cout<< " ";
            space--;
        }

        int pos1 = n - row + 1;
        while(pos1) {
            cout<< "*";
            pos1--;
        }

        cout<< endl;
        row++;
    }

    row = 1;
    while(row <= n) {
        int pos3 = 1;
        while(pos3 <= row) {
            cout<< "*";
            pos3++;
        }

        int space2 = n - row;
        while(space2) {
            cout<< " ";
            space2--;
        }

        int space3 = n - row;
        while(space3) {
            cout<< " ";
            space3--;
        }

        int pos4 = 1;
        while(pos4 <= row) {
            cout<< "*";
            pos4++;
        }

        cout<< endl;
        row++;
    }
    return 0;
}