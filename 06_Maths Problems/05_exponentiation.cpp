# include<bits/stdc++.h>
using namespace std;


int exponentiation(int a, int b) {

    // TC - O(log b) // to the base 2
    
    int res = 1;
    while(b > 0) {
        if(b & 1)  {// odd
            res = res * a;
        }

        a = a * a;
        b = b >> 1; // divide by 2
    }
    return res;

    // TC - O(b)
    // for(int i = 0;i < b;i++) {
        // res *= a;
    // }
    // return res;
}

int main(){
    int a = 2, b = 5;

    int res = exponentiation(a, b);
    cout<< res << endl;
    return 0;
}