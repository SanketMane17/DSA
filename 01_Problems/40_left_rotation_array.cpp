#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateLeft(int d, vector<int> arr)
{
    int last = arr.size() - 1;
    int firstNum;
    int r = 1;
    while(r <= d){
        firstNum = arr[0];
        for (int i = 0; i < arr.size() - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[last] = firstNum;
        r++;
    }

    return arr;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int d = 4;

    vector<int> ans = rotateLeft(d, arr);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}