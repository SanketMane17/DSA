# include<iostream>
# include<math.h>
using namespace std;

int main(){
    // int n = 10110;
    // unsigned int n = 10110;
    // cout<< "Enter binary number's = ";
    // cin>> n;
    
    // GFG approch - sting to decimal number
    // TC - O(1)
    string s = "00111001011110000010100101000000";
    
    int dec_value = 0;
    int base = 1;

    for(int i = 31;i >= 0;i--) {
        if(s[i] == '1')
            dec_value += base;
        base *= 2;
    }

    cout<< dec_value << endl;
    // Love babbar approch
    // TC - O(logn)
    // Stores in integer

    // unsigned int ans = 0;
    // unsigned int i = 0;
    // while (n != 0)
    // {
    //     unsigned int digit = n % 10;
    //     ans += (digit * pow(2, i));
    //     n /= 10;
    //     i++;
    // }
    // cout<< "Answer is = " << ans;
    
    return 0;
}