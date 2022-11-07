// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

// Input: digits = "23"
// Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

# include<bits/stdc++.h>
using namespace std;

void solve(string digits, string output, int index, vector<string> &ans, vector<string> mapping) {

    // base case
    if(index >= digits.length()) {
        ans.push_back(output);
        return;
    }

    // get the mapping number
    int number = digits[index] - '0'; // typecasting

    // map number with string
    string value = mapping[number];

    // solve for each mapping value
    for(int i = 0;i < value.length();i++) {
        output.push_back(value[i]);
        solve(digits, output, index + 1, ans, mapping);

        // backtracking for clearing previous character
        output.pop_back();
    }
}

vector<string> letterCombinations(string digits) {
    
    vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string output = "";
    vector<string> ans;
    int index = 0;
    solve(digits, output, index, ans, mapping);
    return ans;
}

int main(){
    
    string digits = "23";
    vector<string> ans =  letterCombinations(digits);
    for(int i = 0;i < ans.size();i++) 
        cout<< ans[i] << " ";
    cout<< endl;
    return 0;
}