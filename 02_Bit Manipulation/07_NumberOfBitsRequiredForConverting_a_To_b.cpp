// a = 1011 -> 11
// b = 1100 -> 12
//      111 = 3
// ans => 3

# include<iostream>
using namespace std;

int main(){
    int a = 11, b = 12 ;
    int cnt = 0;
    int n = a ^ b; // 0111 [Now find number of bits]
    while(n != 0){
        if(n&1 == 1) // This is time consuming because it checks for hole numbers i.e log(n)
            // cnt++;
        // n = n & (n-1); // optimized code (it will checks only for 1's)
        cnt++;
        n >>= 1;
    }
    cout<< cnt << endl;

    return 0;
}