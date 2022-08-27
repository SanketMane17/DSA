// Input: nums = [3,30,34,5,9]
// Output: "9534330"

# include<bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
    return a + b > b + a;
}

string largestNumber(vector<int>& nums) {

    // TC - O(n*logn)
    // SC - O(n)

    string ans;
    vector<string> v;

    for(int i = 0;i < nums.size();i++) {
        v.push_back(to_string(nums[i]));
    }

    sort(v.begin(), v.end(), cmp);

    for(int i = 0;i < v.size();i++) 
        ans += v[i];

    if(ans.size() > 1 && ans[0] == '0')
        return "0";

    return ans;
}

int main(){
    vector<int> nums = {3,30,34,5,9};
    string large = largestNumber(nums);
    cout<< large << endl;
    
    return 0;
}