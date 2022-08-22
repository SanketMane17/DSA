# include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &arr) {

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