// 0 20
// 5 10
// 10 15
// Sample Output 1
// 2

// Explanation 1
// One room can host the 1st meeting (0-20) and the other room can host both the 2nd meeting (5-10) and 3rd meeting (10-15), one after the other.
// So, only 2 rooms are required if total for the 3 meetings.

#include <iostream>
#include <vector>
#include <algorithm>
#include<queue>
using namespace std;

bool sorter(vector<int> i1, vector<int> i2)
{
    return i1[0] < i2[0];
}

int meetingRooms(int n, vector<vector<int>> &time)
{
    sort(time.begin(), time.end(), sorter);

    // Using min heap
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i = 0;i < time.size();i++) {

        if(pq.empty()) {
            pq.push(time[i][1]);
        }
        else {
            // pq.top() => end time of previous meeting
            if(pq.top() <= time[i][0]) { // use same room
                pq.pop();
                pq.push(time[i][1]);
            } else {
                pq.push(time[i][1]);
            }
        }
    }

    return pq.size();
}

int main()
{
    vector<vector<int>> time = {
        {0, 20},
        {5, 10},
        {10, 15}};

    int rooms = meetingRooms(time.size(), time);

    cout<< rooms << endl;
    return 0;
}