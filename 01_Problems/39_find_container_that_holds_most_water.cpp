// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int maxArea(vector<int> &height)
{

    int max = 0;

    // Two pointer approach
    int left = 0, right = height.size() - 1;

    while (left < right)
    {

        int minItem = min(height[left], height[right]);
        int distance = right - left;

        int area = minItem * distance;
        if (area > max)
            max = area;

        if (height[left] < height[right])
            left++;
        else
            right--;
    }

    // Time complexity - O(n^2)
    // for(int i = 0;i < height.size();i++) {
    //     for(int j = i + 1;j < height.size();j++) {
    //         int minItem = min(height[i], height[j]);
    //         int distance = j - i;

    //         int area = minItem * distance;

    //         if(area > max)
    //             max = area;
    //     }
    // }
    return max;
}

int main()
{

    // vector<int> height = {6, 4, 2, 5, 4, 6, 1, 3, 5, 3};
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int res = maxArea(height);
    cout << "Max height = " << res << endl;
    return 0;
}