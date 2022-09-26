// map  
// Map stores data in key value pair
// Keys must be unique in map
// Value may or may not same
// Sorted on the basis of keys
// slow
// Time complexity for operations is - O(logn)

// unordered_map
// no ordering is required.
// unordered_map is used to store elements as key,value pairs in non-sorted order.
// You need single element access i.e. no traversal.
// fast
// Time complexity for operations is O(1)

# include<bits/stdc++.h>
#include<map> // Library
using namespace std;

int main(){
    
    map<int, string> mpp;

    mpp[1] = "Sanket";
    mpp[2] = "Mahesh";
    mpp[13] = "Kishor";

    mpp.insert({5, "Bheem"});
    cout<< "Before erase " << endl;
    for(auto it: mpp) {
        cout<< it.first << " -> " << it.second << endl;
    }

    cout<< endl;
    
    // Count - check key present of not
    cout<< "Finding 13 -> " << mpp.count(13) << endl;
    cout<< "Finding -13 -> " << mpp.count(-13) << endl;
    cout<< endl;
    mpp.erase(13);
    cout<< "After erase " << endl;
    for(auto it: mpp) {
        cout<< it.first << " -> " << it.second << endl;
    }
    cout<< endl;

    // find()

    auto it = mpp.find(1); // Returns iterator of 1

    for(auto i = it;i != mpp.end();i++) {
        cout<< i->first << " -> " << i->second << endl; // Pointing
    }
    return 0;
}