#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);
    
    int n; cin >> n;
    vector<int> shuffle(n+1);
    for(int i = 1; i < n+1; i++){cin >> shuffle[i];}
    vector<int> ids(n+1);
    for(int i = 1; i < n+1; i++){cin >> ids[i];}

    for(int i = 0; i < 3; i++){
        vector<int> temp = ids;
        for(int j = 1; j < n+1; j++){
            ids[j] = temp[shuffle[j]];
        }
    }
    for(int i = 1; i < n+1; i++){
        cout << ids[i] << '\n'; 
    }
}
