#include <iostream>
#include <vector>
using namespace std;

vector<int> moveZeroes(vector<int> arr)
{

    int j = 0;
    for(int i = 0;i < arr.size();i++) {
        if(arr[i] != 0) {
            swap(arr[j], arr[i]);
            j++;
        }
    }
    return arr;
}

int main()
{

    vector<int> arr{0, 1, 0, 3, 3, 0, 5, 0};
    // vector<int> arr{ 1, 2, 3, 0};

    vector<int> ans = moveZeroes(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}