# include<iostream>
# include<vector>
using namespace std;

void bubbleSort(vector<int> &arr, int n) {

    for(int i = 0;i < n - 1;i++) { // Number of iterations
        for(int j = 0;j < n - i - 1;j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    vector<int> arr = {2, 6, 2, 4, 0, 1};

    cout<< "Before sort" << endl;
    for(int i = 0; i < arr.size();i++) 
        cout<< arr[i] << " ";
    cout<< endl;
    bubbleSort(arr, arr.size());
    cout<< "After sort" << endl;
    for(int i = 0; i < arr.size();i++) 
        cout<< arr[i] << " ";
    cout<< endl;
    return 0;
}