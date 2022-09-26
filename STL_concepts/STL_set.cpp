// set
// Set is an ordered sequence of unique keys whereas
// Elements are unique in set
// Elements are stored in sorted order
// We cannot madify elements in the set

// unordered_set
// unordered_set is a set in which key can be stored in any order, so unordered.
// An unordered_set is implemented using a hash table where keys are hashed into indices of a hash table so that the insertion is always randomized. 
// All operations on the unordered_set takes constant time O(1) on an average which can go up to linear time O(n)


# include<bits/stdc++.h>
#include<set> // Library
using namespace std;

// insert, find, erase, count = O(logn)
// size, begin, end, empty = O(1)

int main(){
    
    set<int> s;

    s.insert(1); // logn
    s.insert(5);
    s.insert(4);
    s.insert(2);
    s.insert(9);
    s.insert(9);
    s.insert(5);
    s.insert(4);

    // Printing set
    for(auto i : s) 
        cout<< i << " ";
    cout<< endl;

    // Erasing elements in set
    set<int> :: iterator it = s.begin();
    it++; // second elements i.e 2 --> set stores elements in soted order
    s.erase(it);

    cout<< "After erasing elements" << endl;
    for(auto i : s) 
        cout<< i << " ";
    cout<< endl;

    // Check element is present or not
    cout<< "5 is present or not in a set --> " << s.count(5) << endl;
    cout<< "-5 is present or not in a set --> " << s.count(-5) << endl;

    cout<< endl;

    // finding element in set

    set<int> :: iterator itr = s.find(5); 
    // if 5 prsent in the set, returns iterator of that 5
    // it not returns iterator for s.end()

    for(auto it = itr; it != s.end();it++) {
        cout<< *it << " ";
    } 
    cout<< endl;
    return 0;
}