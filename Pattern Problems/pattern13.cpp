/* 
    A B C
    B C D 
    C D E
*/

# include<iostream>
using namespace std;

int main(){
    int n, row = 1;
    cout<< "Enter n = ";
    cin>> n;

    while(row <= n){
        int col = 1;
        char start = 'A' + row  - 1; // start of the row 
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