// Sample Input 1
// 22

// Sample Output 1
// 41

// Explanation 1
// The given number is 22 (00010110), it should be converted to 41 (00101001).

#include<bits/stdc++.h>
using namespace std;

unsigned int swapAllOddAndEvenBits(unsigned int x) {

    // TC - O(1) 
    // SC - O(1)

    // One liner answer

    return ((x & 0xAAAAAAAA) >> 1 | (x & 0x55555555) << 1);

    // Get all even bits of x
    // unsigned int even_bits = x & 0xAAAAAAAA;

    // // Get all odd bits of x
    // unsigned int odd_bits = x & 0x55555555;

    // even_bits >>= 1; // Right shift even bits 
    // odd_bits <<= 1; // left shift odd bits

    // // Combine even and odd bits 
    // return (even_bits | odd_bits);    
}

int main()
{
	unsigned int n = 22; // unsigned int - range -> 0 to 2^32

	unsigned int answer = swapAllOddAndEvenBits(n);
	cout << answer;
	return 0;
}