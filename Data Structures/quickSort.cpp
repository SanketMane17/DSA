# include<iostream>
# include<vector>
using namespace std;

int partition(vector<int> &arr, int s, int e) {

    int pivot = e;
    int left = s - 1;

    for(int i = s;i < e;i++) {
        if(arr[i] < arr[pivot]) {
            left++;
            swap(arr[i], arr[left]);
        }
    }

    swap(arr[left+1], arr[pivot]);
    return left + 1;
}

void quickSort(vector<int> &arr, int s, int e) {

    if(s >= e) 
        return;

    // Partition index
    int pi = partition(arr, s, e);

    quickSort(arr, s, pi - 1);
    quickSort(arr, pi + 1, e);
}

int main(){
    vector<int> arr = {2, 6, 4, 0, 1, 3};

    quickSort(arr, 0, arr.size() - 1);

    for(int i = 0;i < arr.size();i++) {
        cout<< arr[i] << " ";
    }
    return 0;
}