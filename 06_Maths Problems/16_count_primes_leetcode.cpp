# include<bits/stdc++.h>
using namespace std;

// Two basic approches are in 02_primes_in_range.cpp
// 1 - O(n * n)
// 2 = O(n * root(n))

// Algorithm = Sieve of erotosthenes
// TC - O(n * log(logn)) -> Harmonic progression

int countPrimes(int n) {

    vector<bool> primes(n + 1, true);
    int cnt = 0;

    primes[0] = primes[1] = false;

    for(int i = 2;i < n;i++) {
        if(primes[i])
            cnt++;
        
        // Remove the number from table of current number
        for(int j = 2 * i;j < n;j += i)
            primes[j] = false;
    }
    return cnt;
}

int main(){
    int n = 40;

    int res = countPrimes(n);
    cout<< res << endl;
    return 0;
}