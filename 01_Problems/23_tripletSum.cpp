# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;

vector<vector<int>> tripletSum(vector<int> &arr, int s) {
    vector<vector<int>> ans;
    sort(arr.begin() , arr.end());
    

    // Optimized code 

    int left , right; // 2 Pointer approch

    for(int i = 0 ; i<arr.size() ; i++)
    {
        // cout<< "Outer loop - 1" << endl;
        left = i+1;
        right = arr.size()-1;
        while(left<right)
        {
            // cout<< "Outer loop - 2" << endl;
            if(arr[left]+arr[right]+arr[i] == s)
            {
                ans.push_back({arr[i], arr[left], arr[right]});
                int x = arr[left] ;
                int y = arr[right] ;

                //skipping same elements
                while(left<right && arr[left]==x){
                    // cout<< "Inner loop - 1" << endl;
                    left++;
                }
                while(left<right && arr[right]==y){
                    // cout<< "Inner loop - 2" << endl;
                    right--;
                }
            }

            else if(arr[left]+arr[right]+arr[i] < s){
                left++;
            }

            else{
                right--;
            }
        }
        //skipping same ith element
        while(i+1<arr.size() && arr[i]==arr[i+1]){
            // cout<< "Outer loop - 3" << endl;
            i++;
        }
    }
    

    // TLE => Time complexity => O(n^3)

    // for(int i = 0;i < arr.size();i++) {
    //     // cout<< "Outer loop - 1" << endl;
    //     for(int j = i + 1;j < arr.size();j++) {
    //         // cout<< "Outer loop - 2" << endl;
    //         for(int k = j + 1;k < arr.size();k++) {
    //             // cout<< "Outer loop - 3" << endl;
    //             if(arr[i] + arr[j] + arr[k] == s) {
    //                 vector<int> temp;
    //                 temp.push_back(arr[i]);
    //                 temp.push_back(arr[j]);
    //                 temp.push_back(arr[k]);
    //                 ans.push_back(temp);
    //             }
    //         }
    //     }
    // }

    sort(ans.begin(), ans.end());

    return ans;
}

int main(){
    // vector<int> arr = {1, 2, 3, 4, 5};
    // vector<int> arr = {2, -3, 3, 3, -2};
    vector<int> arr = {10, 5, 5, 5, 2};
    int sum = 12;

    vector<vector<int>> ans = tripletSum(arr, sum);
    
    for(int i = 0;i < ans.size();i++) {
        for(int j = 0;j < ans[i].size();j++) {
            cout<< ans[i][j] << " ";
        }
        cout<< endl;
    }
    return 0;
}