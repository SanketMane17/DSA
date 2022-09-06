// Input: num = 28
// Output: true
// Explanation: 28 = 1 + 2 + 4 + 7 + 14
// 1, 2, 4, 7, and 14 are all divisors of 28.

# include<bits/stdc++.h>
using namespace std;

// TC - O(n)
// SC - O(1)

bool checkPerfectNumber(int num) {
    int sum = 0;
    for(int i = 1;i <= (num / 2) + 1;i++) {
        if(num % i == 0) {
            sum += i;
        }
    }

    return sum == num;
}

int main(){
    int n = 28;
    cout<< (checkPerfectNumber(n)? "Yes" : "No") << endl;
    return 0;
}