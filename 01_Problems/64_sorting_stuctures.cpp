// Problem Description
// You are given a list of marks over 5 subjects scored by n students. You need to sort the student by following rules.
// The student whose sum of marks will be highest must come at the top of the leaderboard.
// Students whose total sum of marks are the same will be sorted alphabetically ascending by name.
// In all other cases, student with lesser id will come before in the leaderboard

// Input - 
// 1 Alan 45 56 21 32 74
// 2 Fabien 95 94 93 92 91
// 3 Gamora 85 65 54 65 76

// Output -
// 2 3 1

// Explanation -
// Fabien has the most marks obtained and then Gamora and followed by Alan

#include <bits/stdc++.h>
using namespace std;

struct Student{
    int id;
    string name;
    vector<int> marks;
};

bool cmp(Student s1, Student s2) {
    int s1Sum = 0, s2Sum = 0;
    for(int i = 0;i < s1.marks.size();i++) {
        s1Sum += s1.marks[i];
        s2Sum += s2.marks[i];
    }
    
    if(s1Sum > s2Sum) {
        return true;
    } else if(s1Sum < s2Sum) {
        return false;
    } else {
        if(s1.name < s2.name) {
            return true;
        } else if(s1.name > s2.name) {
            return false;
        } else {
            if(s1.id < s2.id) {
                return true;
            } else {
                return false;
            }
        }
    }
}

vector<int> marksSort(int n, vector<Student> students){

    sort(students.begin(), students.end(), cmp);
    
    vector<int> ans;
    for(int i = 0;i < n;i++) {
        ans.push_back(students[i].id);
    }
    return ans;
}


int main(){
    vector<Student> students = {
        {1, "Alan", {45, 56, 21, 32, 74}},
        {2, "Fabien", {95, 94, 93, 92, 91}},
        {3, "Gamora", {85, 65, 54, 65, 76}}
    };

    vector<int> ids = marksSort(students.size(), students);
    for(auto &id:ids){
        cout<< id << " ";
    }
    return 0;
}