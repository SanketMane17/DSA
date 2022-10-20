#include <iostream>
#include <vector>
using namespace std;

int findPos(vector<int> &arr, int n, int k) {
    int pos = 0;
    for(int i = 0;i < n;i++) {
        if(arr[i] < k)
            pos++;
        else break;
    }
    return pos;
}

void insertElement(vector<int> &arr, int n, int k)
{
    int pos = findPos(arr, n, k);

    // Right shifting elements
    for(int i = n-1;i >= pos;i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = k;
}

int main()
{
    vector<int> arr = {1, 7, 11, 13, 19};
    int k = 8;

    cout << "Before insertion" << endl;
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;

    insertElement(arr, arr.size(), k);

    cout << "After insertion" << endl;
    for (int i = 0; i <= arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}