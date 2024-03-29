# include<bits/stdc++.h>
using namespace std;

// 1 - O(n)
// bool isPrime(int n) {
//     for(int i = 2;i < n;i++) {
//         if(n % i == 0)
//             return false;
//     }
//     return true;
// }

// TC - O(root(n) * n)
// SC - O(n)
// 2 - O(root(n))
bool isPrime(int n) {
    for(int i = 2;i <= sqrt(n);i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

vector<int> primesInRange(int start, int end) {

    vector<int> ans;
    for(int i = start;i <= end;i++) {
        if(isPrime(i))
            ans.push_back(i);
    }

    return ans;
}

int main(){
    
    vector<int> ans = primesInRange(1, 100);
    for(int i = 0;i < ans.size();i++) {
        cout<< ans[i] << " ";
    }
    return 0;
}