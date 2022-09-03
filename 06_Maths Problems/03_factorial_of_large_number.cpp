// constraints = 1 <= n <= 1000 ie. 10^3
// which gives you the large factorial number
// we can't store it in any primitive datatype
// so, we have to store it on array of size 500 <-- suppose

#include <bits/stdc++.h>
using namespace std;

void factorialOfLargeNums(int n)
{
    // TC - O(n * m) n = number, m = sizeof vector
    // SC - O(m)

    vector<int> ans;
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
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << "";
}

int main()
{

    int n = 5;
    factorialOfLargeNums(n);
    return 0;
}