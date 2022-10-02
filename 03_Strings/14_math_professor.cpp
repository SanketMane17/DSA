// Problem Description
// A Maths professor was getting bored. So he thought of performing a task.

// The names of the students in his class are given as an array of strings. Another string, B, is given, consisting of distinct lowercase English letters. For each name in the array of strings, he wants to calculate the number of unique letters from string B that appear in that name (not including duplicates).

// Sample Input 1
// 3
// iye
// hi
// bye
// bebe

// Sample Output 1
// 1 2 1

// Explanation
// String B is "iye"
// The first name "hi" contains 1 unique letter from string B - "i".
// The second name "bye" contains 2 unique letters from string B - "y" and "e".
// The third name "bebe" contains 1 unique letter from string B - "e". Although "e" appears twice in "bebe", only unique letters should be counted, so it's counted only once.

# include<bits/stdc++.h>
using namespace std;

// TC - O(n * V[i].length())
// SC - O(1)

vector<int> mathProfessor(int n,vector<string>&v,string B){
    
    vector<int> ans;
    for(int i = 0;i < n;i++) {
        string current = v[i];
        set<char> temp;

        for(int j = 0;j < current.length();j++) {
            if(B.find(current[j]) < B.length()) {
                temp.insert(current[j]);
            }
        }
        ans.push_back(temp.size());
    }

    return ans;
}

int main(){
    vector<string> v = {"hi", "bye", "bebe"};
    string B = "iye";

    vector<int> ans = mathProfessor(v.size(), v, B);
    for(auto i : ans) 
        cout<< i << " ";
    return 0;
}
