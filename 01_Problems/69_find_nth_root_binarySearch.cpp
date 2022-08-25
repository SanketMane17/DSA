// Eg - 1
// Input - X = 4 , N = 2
// Output - 2
// For X = 4 and N = 2 => (4) ^ (1/2) = 2. And floor(2) = 2

// Eg - 2
// Input - X = 9, N = 3
// Output - 2
// For X = 9 and N = 3 => (9) ^ (1/3) = 2.08. And floor(2.08) = 2

// Eg - 2
// Input - X = 11 and N = 2
// 3
// For X = 11 and N = 2 => (11) ^ (1/2) = 3.316. And floor(3.316) = 3

# include<bits/stdc++.h>
using namespace std;

int nthRoot(int x, int n){
    
    // TC - O(logx * logn) -> logn for pow function
    // SC - O(1)

    int start = 1, end = x;
    int mid, res = -1;

    while(start <= end) { 
        mid = start + (end - start) / 2;

        if(pow(mid, n) > x) {
            end = mid - 1;
        } else if(pow(mid, n) < x) { // Search left
            res = mid;
            start = mid + 1;
        } else if(pow(mid, n) == x) { // Search right
            return mid;
        }
    }
    return res;
}

int main(){
    
    // int x = 4, n = 2;
    // int x = 11, n = 2;
    int x = 9, n = 3;

    int res = nthRoot(x, n);
    cout<< res << endl;
    return 0;
}
