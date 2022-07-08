/*
        1
      2 3
    4 5 6
  7 8 9 10
*/

# include<iostream>
using namespace std;

int main(){
     int n, row = 1;
    cout<< "Enter n = ";
    cin>> n;
    int cnt = 1;

    while(row <= n){
        int col = 1;
        int space = n - row;
        while(space){
            cout<< " ";
            space--;
        }
        while(col <= row){
            cout<< cnt;
            cnt++;
            col = col + 1;
        }
        cout<< endl;
        row = row + 1;
    }
    return 0;
}