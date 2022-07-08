# include<iostream>
# include<vector>
using namespace std;

void sort_0_1_2(vector<int> &arr) {
    int firstvalue = 0;
    int thirdvalue = 2;

    // Taking all 0's to front of the array
    int firstIndex = 0;
    for(int i = 0;i < arr.size();i++) {
        if(arr[i] == firstvalue) {
            swap(arr[i], arr[firstIndex]);
            firstIndex++;
        }
    }

    // 1's are automatically be sort b'coz 0's and 2's are sorted to fist and last indexes

    // Taking all 2's to back of the array
    int thirdIndex = arr.size() - 1;
    for(int i = thirdIndex;i > 0;i--) {
        if(arr[i] == thirdvalue) {
            swap(arr[i], arr[thirdIndex]);
            thirdIndex--;
        }
    }
}

int main(){
    // vector<int> arr = {1,2,2,0,1,2,0,0};
    vector<int> arr = {0, 1, 2, 1, 2,0, 1, 2};
    // vector<int> arr = {0, 1, 2, 2, 1, 0};

    sort_0_1_2(arr);
    for(int i = 0;i < arr.size();i++) {
        cout<< arr[i] << " ";
    }
    return 0;
}