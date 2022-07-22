# include<iostream>
using namespace std;

int pow(int a, int b) {
    int res = 1;
    while(b > 0) {
        if((b&1) != 0) {
            res *= a;
        }
        a *= a;
        b = b >> 1;
    }
    return res;
}

// Time complexity - O(n)
// int pow(int a, int b) {
//     int ans = 1;
//     for(int i = 1; i <= b;i++) {
//         ans *= a;
//     }
//     return ans;
// }

int main(){
    int a = 2;
    int b = 3;

    cout<< pow(a, b) << endl;
    return 0;
}