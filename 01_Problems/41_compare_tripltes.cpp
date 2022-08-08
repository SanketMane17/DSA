#include <iostream>
#include <vector>
using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b)
{
    int aPoints = 0, bPoints = 0;

    for (int i = 0; i < a.size(); i++) {
        if(a[i] > b[i])
            aPoints++;
        else if(a[i] < b[i])
            bPoints++;
    }

    return {aPoints, bPoints};
}

int main()
{
    // vector<int> a = {1, 2, 3};
    // vector<int> b = {3, 2, 1};

    vector<int> a = {17, 28, 30};
    vector<int> b = {99, 16, 8};

    vector<int> ans = compareTriplets(a, b);

    for(int i = 0;i < ans.size();i++) {
        cout<< ans[i] << " ";
    }
    return 0;
}