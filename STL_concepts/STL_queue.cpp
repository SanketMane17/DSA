# include<bits/stdc++.h>
# include<queue> // Library
using namespace std;

// TC for all operations - O(1)

int main(){
    
    // Queue - First In First Out (FIFO)
    queue<string> q; 

    q.push("Sanket");
    q.push("Mahesh");
    q.push("Kishor");

    // Top element 
    cout<< q.front() << endl;

    // Size of the queue
    cout<< q.size() << endl;

    // Removing element
    q.pop();

    cout<< q.size() << endl;
    return 0;
}