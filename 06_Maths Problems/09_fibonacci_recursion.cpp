# include<bits/stdc++.h>
using namespace std;

// TC - O(2^n) --> Creates binary tree
// SC - O(2^n) --> Copies of recursive call

int fibonacci(int n) {
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    
    int n = 7;
    cout<< fibonacci(n) << endl;
    return 0;
}