// Input:
// N = 4
// m[][] = {{1, 0, 0, 0},
//          {1, 1, 0, 1},
//          {1, 1, 0, 0},
//          {0, 1, 1, 1}}
// Output:
// DDRDRR DRDDRR
// Explanation:
// The rat can reach the destination at
// (3, 3) from (0, 0) by two paths - DRDDRR
// and DDRDRR, when printed in sorted order
// we get DDRDRR DRDDRR.

#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>> &m, int n, int x, int y, vector<vector<int>> &visited) {
    if((x >= 0 && x < n) && (y >= 0 && y < n) && m[x][y] == 1 && visited[x][y] == 0)
        return true;
    return false;
}

void solve(vector<vector<int>> &m, int n, int x, int y, 
          vector<vector<int>> &visited, string path, vector<string> &ans) {

    // base case
    if(x == n - 1 && y == n - 1) {
        ans.push_back(path);
        return;
    }

    // Mark visited as true
    visited[x][y] = 1;
    
    // 4 choices - D | L | R | U

    // Down
    int newx = x + 1;
    int newy = y;
    if(isSafe(m, n, newx, newy, visited)) {
        path.push_back('D');
        solve(m, n, newx, newy, visited, path, ans);

        // backtrack
        path.pop_back();
    }

    // Left
    newx = x;
    newy = y - 1;
    if(isSafe(m, n, newx, newy, visited)) {
        path.push_back('L');
        solve(m, n, newx, newy, visited, path, ans);

        // backtrack
        path.pop_back();
    }

    // Right
    newx = x;
    newy = y + 1;
    if(isSafe(m, n, newx, newy, visited)) {
        path.push_back('R');
        solve(m, n, newx, newy, visited, path, ans);

        // backtrack
        path.pop_back();
    }

    // Up
    newx = x - 1;
    newy = y;
    if(isSafe(m, n, newx, newy, visited)) {
        path.push_back('U');
        solve(m, n, newx, newy, visited, path, ans);

        // backtrack
        path.pop_back();
    }

    // backtrack
    visited[x][y] = 0;
}

vector<string> findPath(vector<vector<int>> &m, int n)
{

    vector<string> ans;

    // edge case
    if(m[0][0] == 0)
        return ans;

    string path = "";

    // Initilizing visited matrix with 0
    vector<vector<int>> visited = m;
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < n;j++) {
            visited[i][j] = 0;
        }
    }
    int srcx = 0, srcy = 0;
    solve(m, n, srcx, srcy, visited, path, ans);
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{

    vector<vector<int>> m = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}};

    vector<string> ans = findPath(m, m.size());
    for(int i = 0;i < ans.size();i++) 
        cout<< ans[i] << " ";
    return 0;
}