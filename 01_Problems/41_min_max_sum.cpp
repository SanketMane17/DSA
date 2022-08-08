# include<iostream>
# include<vector>
# include<algorithm>

using namespace std;

void minMaxSum(vector<int> arr) {
    
    sort(arr.begin(), arr.end());
    long long sum = 0;
    for(int i = 0;i < arr.size();i++) {
        sum += arr[i];
    }

    cout<< sum << endl;

    long long min = arr[0], max = 0;
    for(int i = 1;i < arr.size();i++) {
        
        if(arr[i] >= min)
            max = arr[i];
        else   
            min = arr[i];
    }

    cout<< sum - max << " " << sum - min << endl;
}

int main(){
    // vector<int> arr = {1, 2, 3, 4, 5};
    // vector<int> arr = {7, 69, 2, 221, 8974};
    vector<int> arr = {254961783, 604179258, 462517083, 967304281, 860273491};
    // vector<int> arr = {5, 5, 5, 5, 5};

    // 2181931615 2894274113

    minMaxSum(arr);
    return 0;
}
