# include<iostream>
# include<math.h>
using namespace std;

int main(){
    int n = 22;
    
    // GFG approch - 1
    // TC - O(1)
    // Using rigth shift and & operator and string

    string s = "";
    for(int i = 31;i >= 0;i--) {
        int k = n >> i;
        if(k & 1)
            s += "1";
        else s += "0";
    }

    cout<< s << endl;

    // GFG approch - 3
    // TC - O(logn)
    // Stores in array

    // int binary[32];
    // int i = 0;
    // while(n > 0) {
    //     binary[i] = n % 2;
    //     n = n / 2;
    //     i++;
    // }

    // for(int j = i - 1;j >= 0;j--) 
    //     cout<< binary[j];

    // Love babbar approch
    // TC - O(logn)

    // int ans = 0;
    // int i = 0;
    // while(n != 0) {
    //     int bit = (n & 1);
    //     ans += (bit * pow(10, i));
    //     n >>= 1;
    //     i++;
    // }
    // cout<< "Answer is = " << ans << endl;
    return 0;
}