# include<iostream>
using namespace std;

int main(){
    // int n = 5; // output = 2 [5 -> 101, 2 -> 010]
    int n = 7; // output = 0

    // int m = n;
    // int mask = 0;

    // Edge case 
    if(n == 0) {
        return 1;
    }
    
    // while(m != 0) {
    //     mask = (mask << 1) | 1;
    //     m >>= 1;
    // }

    // int ans = (~n) & mask;

    // Another approach
    int ans = 0;
    int power = 1;

    while(n > 0) {
        int bit = n & 1;

        if(bit == 0) 
            ans += power;

        n >>= 1;
        power *= 2;
    }
    cout<< ans << endl;
    return 0;
}