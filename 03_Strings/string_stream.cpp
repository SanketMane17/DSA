#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    // string str = "871,166,-433,-917,-846,461";
    string str = "23,4,56";

    vector<int> ans;
    stringstream ss(str);

    int n;
    char skip; // Skip the commas
    
    while(ss) {
        if(ss.peek() != ',') {
            if(ss >> n) 
                ans.push_back(n);
        } else {
            ss >> skip;
        }
    }

    for(int i = 0;i < ans.size();i++) {
        cout<< ans[i] << " ";
    }
    return 0;
}