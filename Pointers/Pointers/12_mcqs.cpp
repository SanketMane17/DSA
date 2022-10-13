# include<bits/stdc++.h>
using namespace std;

void update(int **p) {
    ++(**p);
}

int main(){
    // 1
    // int first = 8;
    // int second = 18;
    // int *p = &second;
    // *p = 9;
    // cout<< first << " " << second << endl; // 8 9

    // 2
    // int first = 6;
    // int *p = &first;
    // int *q = p;
    // (*q)++;
    // cout<< first << endl; // 7

    // 3
    // int first = 8;
    // int *p = &first;
    // cout<< (*p)++ << endl; // 8 (post increment)
    // cout<< first << endl; // 9

    // 4
    // int *p = 0;
    // int first = 112;
    // *p = first; // Segmentation fault. Not valid
    // cout<< first << endl;

    // 5
    // int first = 8;
    // int second = 11;
    // int *third = &second;
    // first = *third;
    // *third = *third + 2;
    // cout<< first << " " << second << endl; // 11 13

    // 6
    // float f = 12.5;
    // float p = 21.5;
    // float *ptr = &f;
    // (*ptr)++;
    // *ptr = p; // It's not a null pointer
    // cout<< *ptr << " " << f << " " << p << endl; // 21.5 21.5 21.5

    // 7 
    // int arr[5];
    // int *ptr;
    // cout<< sizeof(arr) << " " << sizeof(ptr) << endl; // 20 4

    // 8 
    // int arr[] = {11, 21, 22, 33};
    // cout<< *arr << " " << *(arr + 1) << endl; // 11 21

    // 9
    // int arr[] = {11, 21, 22, 33};
    // cout<< arr << " " << &arr << endl; // Same address
    
    // 10
    // int arr[] = {11, 21, 13};
    // cout<< arr + 1 << endl; // base address + 4

    // 11
    // int arr[] = {11, 21, 13};
    // int *p = arr;
    // cout<< 2[p] << " " << p[2] << endl; // 13 13

    // 12
    // int arr[] = {11, 21, 12};
    // int *p = arr++; // Not possible
    // cout<< *p << endl;

    // 13
    // char ch = 'a';
    // char* p = &ch;
    // ch++;
    // cout<< *p << endl; // b

    // 14
    // char ch[] = "abcde";
    // char *p = &ch[0];
    // cout<< p << endl; // abcde

    // 15
    // char ch[] = "abcde";
    // char *p = &ch[0];
    // p++;
    // cout<< p << endl; // bcde

    // 16
    // char ch[] = "sanket";
    // char *p = &ch[0];
    // cout<< ch[0] << " " << p[0] << endl; // s s

    // 17
    // int first = 110;
    // int *p = &first;
    // int **q = &p;
    // int second = (**q)++ + 9;
    // cout<< first << " " << second << endl; // 111 119

    // 18
    // int first = 100;
    // int *p = &first;
    // int **q = &p;
    // int second = ++(**q);
    // int *r = *q;
    // ++(*r);
    // cout<< first << " " << second << endl; // 102 101

    // int num = 100;
    // int *p = &num;
    // update(&p);
    // cout<< num << endl; // 101
    return 0;
}