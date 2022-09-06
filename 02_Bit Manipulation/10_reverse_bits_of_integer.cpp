// Sample Input 1
// 43261596

// Sample Output 1
// 964176192

// Explanation 1
// The input binary string 00000010100101000001111010011100 represents the unsigned integer 43261596, so return 964176192 whose binary representation is 00111001011110000010100101000000.

#include <bits/stdc++.h>
using namespace std;

unsigned int reverseBits(unsigned int n)
{

    // Convert n into binary form
    string binaryNum = "";
    for (int i = 31; i >= 0; i--)
    {
        int k = n >> i;
        // Store it in string or array
        if (k & 1)
            binaryNum += "1";
        else
            binaryNum += "0";
    }

    // Reverse it
    reverse(binaryNum.begin(), binaryNum.end());

    cout<< binaryNum << endl;
    // Convert binary into decimal
    // int dec_value = 0;
    // int base = 1;

	// for (int i = 31; i >= 0; i--) {
	// 	if (binaryNum[i] == '1')
	// 		dec_value += base;
	// 	base = base * 2;
	// }
    // return dec_value;

    long long ans = 0;
    long long base = 1;
    for(int i = 31;i >= 0;i--) {
        if(binaryNum[i] == '1') {
            ans += base;
        }
        base *= 2;
    }
    return ans;
}

int main()
{
    // unsigned int n = 43261596;
    unsigned int n = 1;

    unsigned int res = reverseBits(n);
    cout << res << endl;
    return 0;
}

// 00000010100101000001111010011100 // 43261596
// 00111001011110000010100101000000 // 964176192