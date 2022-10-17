// Inline functions are used to reduce the function call overhead
// Function call is replaced with function body before the compilation of program
// We can use inilne keyword
// Reduces extra memory space
// If is recommended only when function body have onlye 1-2 lines of code

# include<bits/stdc++.h>
using namespace std;

inline int getMax(int a, int b) {
    return (a > b) ? a : b;
}

int main(){
    
    int a = 1, b = 2;
    int ans;

    ans = getMax(a, b);
    cout<< ans << endl;
    a += 3;
    b += 1;

    ans = getMax(a, b);    
    cout<< ans << endl;
    return 0;
}