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
        int star = (n - row + 1);
            while(star){
                cout<< "*";
                star--;
            }
        cout<< endl;
        row = row + 1;
    }
    return 0;
}