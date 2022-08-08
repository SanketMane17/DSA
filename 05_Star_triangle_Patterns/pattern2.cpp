/* 
    1 1 1
    2 2 2
    3 3 3 
*/

# include<iostream>
using namespace std;

int main(){
    int n, i = 1;
    cout<< "Enter n = ";
    cin>> n;

    while(i <= n){
        int j = 1;
        while (j <= n){
            cout<< i;
            j = j + 1;
        }
        cout<< endl;
        i = i + 1;        
    }
    return 0;
}