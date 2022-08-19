// Input - 4 2 -2 5
// Output - Yes

// Input - 3 2 -1
// Output - No

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

string subarraySumZero(vector<int> &arr)
{
    // Optimal 
    // TC - O(n)
    // SC - O(n) [Using set]
    unordered_set<int> set;
    int sum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];

        if (sum == 0 || set.find(sum) != set.end())
            return "Yes";
        set.insert(sum);
    }

    return "No";

    // TC - O(n^2) (TLE)
    // for(int i = 0;i < arr.size();i++) {
    //     int sum = 0;
    //     for(int j = i;j < arr.size();j++) {
    //         sum += arr[j];
    //         if(sum == 0) {
    //             return "Yes";
    //         }
    //     }
    // }
    // return "No";
}

int main()
{

    vector<int> arr = {4, 2, -2, 5};
    // vector<int> arr = {3, 2, -1};

    string res = subarraySumZero(arr);
    cout << res << endl;
    ;
    return 0;
}