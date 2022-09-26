#include <bits/stdc++.h>
#include <algorithm> // Library
using namespace std;

int main()
{

    // binary search - array/vector should be sorted
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    v.push_back(9);

    // Check value present or not (bool)
    // cout<< "Is 3 present ? : " << binary_search(v.begin(), v.end(), 3) << endl;

    // Find lower bound
    // if found, returns iterator for given element
    // if not found , returns next iterator

    // auto itr = lower_bound(v.begin(), v.end(), 1); // returs only address
    // cout<< *itr << endl; // convert it to value
    // cout<< &itr << endl;

    // In case of array's
    // auto itr = lower_bound(arr, arr + n, 3) - arr;
    // cout<< itr << endl;

    //  auto itr = lower_bound(v.begin(), v.end(), 7) - v.begin(); // return index
    //  cout<< itr << endl;

    // Find upper bound
    // if found, returns next iterator for given element
    // if not found , returns next iterator

    // auto itr = upper_bound(v.begin(), v.end(), 3); // returns address
    // cout<< *itr << endl;

    // auto itr = upper_bound(v.begin(), v.end(), 3) - v.begin(); // returns index
    // cout<< itr << endl;

    // max
    // min
    // swap
    // reverse
    // sort
    // --> intro sort
        // combinatio of --> quick sort, heap sort, insertion sort

    // rotate
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "After rotating" << endl;
    rotate(v.begin(), v.begin() + 3, v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}