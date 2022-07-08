# include<iostream>
# include<vector>
using namespace std;

vector<int> arrayIntersection(vector<int> &arr1, vector<int> &arr2) {
    vector<int> newVec;
    // Optimized code 

    int i = 0, j = 0;
    while(i < arr1.size() && j < arr2.size()) {
        if(arr1[i] < arr2[j])
            i++;
        else if(arr1[i] == arr2[j]) {
            newVec.push_back(arr1[i]);
            i++;
        }
        else
            j++;
    }

    // Time complexity => O(n^2)

    // for(int i = 0;i < arr1.size();i++) {
    //     for(int j = 0;j < arr2.size();j++) {

    //         if(arr1[i] < arr2[j])
    //             break;
    //         if(arr1[i] == arr2[j]) {
    //             newVec.push_back(arr1[i]);
    //             arr2[j] = -111;
    //             break;
    //         }
    //     }
    // }

    return newVec;
}

int main(){
    vector<int>arr1 = {1,2,2,3,4};
    vector<int>arr2 = {2,2,3,3};

    vector<int> output = arrayIntersection(arr1, arr2);
    
    for(int i = 0;i < output.size();i++) {
        cout<< output[i] << " ";
    }
    return 0;
}