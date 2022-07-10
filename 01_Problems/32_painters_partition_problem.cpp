# include<iostream>
# include<vector>
using namespace std;

bool isPossible(vector<int> &boards, int n, int k, int mid) {
    int painter = 1;
    int totalTime = 0;

    for(int i = 0;i < n;i++) {
        if(totalTime + boards[i] <= mid) {
            totalTime += boards[i];
        }
        else {
            painter++;
            if(painter > k || boards[i] >= mid) {
                return false;
            }
            totalTime = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int n, int k)
{
    int s = 0;
    int totalBoards = 0;
    for(int i = 0;i < n;i++)
        totalBoards += boards[i];

    int e = totalBoards;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while(s <= e) {
        if(isPossible(boards, n, k, mid)) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(){
    // We have an array 
    vector<int> boards = {5, 5, 5, 5};
    // vector<int> boards = {10, 20, 30, 40};
    int n = boards.size();
    int k = 2; // painters

    cout<< "Answer = " << findLargestMinDistance(boards, n, k) << endl;
    return 0;
}