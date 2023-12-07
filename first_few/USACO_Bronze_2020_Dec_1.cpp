/*
Farmer John's cows have been holding a daily online gathering on the "mooZ" video meeting platform. For fun, they have invented a simple number game to play during the meeting to
keep themselves entertained.

Elsie has three positive integers A, B, and C (A≤B≤C). These integers are supposed to be secret, so she will not directly reveal them to her sister Bessie. Instead, she gives 
Bessie seven (not necessarily distinct) integers in the range 1…109, claiming that they are A, B, C, A+B, B+C, C+A, and A+B+C in some order.

Given a list of these seven numbers, please help Bessie determine A, B, and C. It can be shown that the answer is unique 
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> input;
    int in;
    input.resize(7);
    for(int i = 0; i < 7; i++){cin>>input[i];}
    sort(input.begin(), input.end());
    int abc = input[6];
    int a = input[0];
    int b = input[1];
    int c = abc - a - b;
    cout << a << ' ' << b << ' ' << c << '\n';
}
