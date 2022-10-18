# include<bits/stdc++.h>
using namespace std;

void reachHome(int src, int dest) {

    cout<< "Source = " << src << " Destination = " << dest << endl;

    // base case
    if(src == dest) {
        cout<< "Stop" << endl;
        return;
    }

    // processing
    src++;

    // recursive rule
    reachHome(src, dest);
}

int main(){
    
    int src = 1, dest = 10;

    reachHome(src, dest);
    return 0;
}