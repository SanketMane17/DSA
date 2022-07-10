# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;

void sort_0_1(vector<int> & arr) {
    int left = 0;
    int right = arr.size() - 1;

    while(left < right) {
        if(arr[left] < arr[right])
            left++;
        
        else if(arr[left] > arr[right]) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
            

        else if(arr[left] == arr[right])
            right--;
    }
}

int main(){
    vector<int> arr = {0, 1, 1, 0, 0, 1};

    sort_0_1(arr);
    for(int i = 0;i < arr.size();i++) {
        cout<< arr[i] << " ";
    }

    return 0;
}