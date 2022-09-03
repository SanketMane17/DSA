// n = 101000
// trailing zeros = 3

# include<bits/stdc++.h>
using namespace std;

vector<int> largeFactorial(int n) { // TC - O(n * m)

    vector<int> ans; // SC - O(m), m = size of ans
    ans.push_back(1);
    for (int x = 2; x <= n; x++)
    {
        int carry = 0;
        for (int i = 0; i < ans.size(); i++)
        {
            int currProd = ans[i] * x + carry;
            ans[i] = currProd % 10;
            carry = currProd / 10;
        }

        while (carry != 0)
        {
            ans.push_back(carry % 10);
            carry = carry / 10;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

// TC - O(n * m)
// SC - O(m), m = size of ans
int findTrailingZeroes(int n) { 
    vector<int> fact = largeFactorial(n); // O(n * m)
    int cnt = 0;

    for(int i = fact.size() - 1;i >= 0;i--) { // O(m);
        if(fact[i] != 0)
            break;
        else 
            cnt++;
    }  
    return cnt;
}

int main(){
    int n = 1000;
    cout<< findTrailingZeroes(n) << endl;
    return 0;
}