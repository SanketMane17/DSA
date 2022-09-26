// Input: nums = [1,2,1]
// Output: [2,-1,2]
// Explanation: The first 1's next greater number is 2; 
// The number 2 can't find next greater number. 
// The second 1's next greater number needs to search circularly, which is also 2.

# include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &arr) {

    // TC - O(n)
    // SC - O(n)

    int n = arr.size();
    vector<int> ans(n);
    stack<int> st;

    for(int i = (2*n - 1);i >= 0;i--) {
        // Removing lesser element of current element from stack

        while(!st.empty() && st.top() <= arr[i % n]) {
            st.pop();
        }

        if(i < n) {
            if(!st.empty()) ans[i] = st.top();
            else ans[i] = -1;
        }

        st.push(arr[i % n]);
    }
    return ans;
}

int main(){
    vector<int> arr = {1, 2, 1};
    
    vector<int> ans = nextGreaterElement(arr);
    for(int i = 0;i < ans.size();i++) {
        cout<< ans[i] << " ";
    }
    return 0;
}