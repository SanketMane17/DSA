// cases
// 1 -> n < m
// 2 -> n > m
// 3 -> carry remains 1 after all operations

# include<bits/stdc++.h>
using namespace std;

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
    
    // TC - O(n)
    // SC - O(n)
    
    vector<int> ans;
    int i = n - 1;
    int j = m - 1;
    
    int carry = 0;
    while(i >= 0 && j >= 0) {
        int sum = a[i] + b[j] + carry;
        ans.push_back(sum % 10);
        carry = sum / 10;
        i--;
        j--;
    }
    
    while(i >= 0) {
        int sum = a[i] + carry;
        ans.push_back(sum % 10);
        carry = sum / 10;
        i--;
    }
    
    while(j >= 0) {
        int sum = b[j] + carry;
        ans.push_back(sum % 10);
        carry = sum / 10;
        j--;
    } 
    
    while(carry != 0) {
        ans.push_back(carry % 10);        
        carry = carry / 10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    
    vector<int> a = {1, 2};
    vector<int> b = {9, 9, 2, 4, 9};

    vector<int> ans = findArraySum(a, a.size(), b, b.size());
    for(auto i : ans) {
        cout<< i << " ";
    }
    return 0;
}