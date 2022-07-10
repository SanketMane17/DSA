#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> &arr, int K)
{
    int start = 0, end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (K == arr[mid])
        {
            ans = mid;
            end = mid - 1; // for first occcurrence
        }
        else if (K < arr[mid])
            end = mid - 1;
        else if (K > arr[mid])
            start = mid + 1;

        mid = start + (end - start) / 2;
    }

    return ans;
}

int lastOcc(vector<int> arr, int K) {
    int start = 0, end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (K == arr[mid]){
            ans = mid;
            start = mid + 1; // last occurrence
        }
        else if (K < arr[mid])
            end = mid - 1;
        else if (K > arr[mid])
            start = mid + 1;

        mid = start + (end - start) / 2;
    }
    return ans;
}

// vector<int> firstLastOcc(vector<int> arr, int K)
// {
//     // Brute force approch-- > O(n ^ 2)

//     vector<int> res;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (K == arr[i])
//         {
//             res.push_back(i);
//             break;
//         }
//     }

//     for (int i = arr.size() - 1; i > 0; i--)
//     {
//         if (K == arr[i])
//         {
//             res.push_back(i);
//             break;
//         }
//     }
//     return res;
// }

int main()
{
    vector<int> arr = {0, 1, 1, 1, 5};
    int key = 1;

    cout<< "First occurrence of 1 = " << firstOcc(arr, 1) << endl;
    cout<< "Last occurrence of 1 = " << lastOcc(arr, 1) << endl;

    // Brute force approch
    
    // vector<int> res = firstLastOcc(arr, key);
    // for (int i = 0; i < res.size(); i++)
    // {
    //     cout << res[i] << " ";
    // }
    return 0;
}