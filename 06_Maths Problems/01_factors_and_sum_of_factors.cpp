# include<bits/stdc++.h>
using namespace std;

vector<int> findFactors(int n) {

    // Optimization
    // TC - O(root(n))
    // SC - O(1)

    int sum = 0;
    int cnt = 0;
    for(int i = 1;i <= sqrt(n);i++) {
        if(n % i == 0) {
            if (i == (n / i)) { // (1, 16)(2, 8)(4, 4) <-- for n = 16
                cnt += 1;
                sum += i;
            }
            else {
                cnt += 2;
                sum += (i + n/i);
            }
        }
    }
    
    return {cnt , sum};

    // TC - O(n)
    // SC - O(1)

    // int sum = 0;
    // for(int i = 1;i <= n;i++) {
    //     if(n % i == 0)
    //         sum += i;
    // }

    // return sum;
}

int main(){
    int n = 30;
    
    vector<int> output =  findFactors(n);
    for(int i = 0;i < output.size();i++) {
        cout<< output[i] << " ";
    }
    return 0;
}