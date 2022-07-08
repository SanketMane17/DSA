/*
    1 2 3 4 
    1 2 3 4
    1 2 3 4 
    1 2 3 4 
*/


# include<iostream>
using namespace std;

int main(){
    int n, i = 1;
    cout<< "Enter n = ";
    cin>> n;
    
    // while(i <= n){
    //     int j = 1;
    //     while(j <= n){
    //         cout<< j;
    //         j = j + 1;
    //     }
    //     cout<< endl;
    //     i = i + 1;
    // }

/*
    4 3 2 1 
    4 3 2 1 
    4 3 2 1 
    4 3 2 1 
*/

    while(i <= n){
        int j = 1;
        while(j <= n){
            cout<< n-j+1;
            j = j + 1;
        }
        cout<< endl;
        i = i + 1;
    }

    return 0;
}