#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);

    int n; cin >> n;
    vector<int> rooms(n);
    for(int i = 0; i < n; i++){cin >> rooms[i];}
    
    int record = -1;

    for(int i = 0; i < n; i++){
        int pre = 0;
        for(int j = i+1; j < i+n; j++){
            pre = pre + (j-i)*rooms[j%n];
        }
        if(record==-1 || pre < record){
            record = pre;
        }
    }
    cout << record;
}
