# include<bits/stdc++.h>
using namespace std;

void distinctElem(vector<int> &arr, int n) {

    // TC - O(n)
    // SC - O(n)
    
    set<int> s;
    for(int i = 0;i < n;i++) {
        s.insert(arr[i]);
    }

    for(auto it: s)
        cout<< it << " " ;

    // Brute force
    // TC - O(n^2)
    // SC - 0(1)

    // int i, j;
    // for(i = 0;i < n;i++) {
    //     for(j = 0;j < i;j++) {
    //         if(arr[i] == arr[j])
    //             break;
    //     }

    //     if(i == j) {
    //         cout<< arr[i] << " ";
    //     }
    // }
}

int main(){
    vector<int> arr = {1, 2, 2, 3, 3};
    // distinct elements = 1, 2, 3

    int n = arr.size();
    distinctElem(arr, n);
    return 0;
}