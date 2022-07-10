# include<iostream>
using namespace std;

bool linearSearch(int *arr, int n, int num) {
    for(int i = 0;i < n;i++) {
        if(num == arr[i])
            return true;
    }
    return false;
}

int main(){
    int arr[] = {1,2,3,4,8,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num;
    cout<< "Enter number to search: ";
    cin>> num;

    bool search = linearSearch(arr, size, num);
    if(search == true) {
        cout<< num << " is present in the array" << endl;
    } else {
        cout<< num << " is not present in the array" << endl;
    }
    return 0;
}