#include <bits/stdc++.h>
using namespace std;
#define ll long long
multiset<pair<int, ll>> cows;

int main() {
    freopen("cowqueue.in", "r", stdin);
    freopen("cowqueue.out", "w", stdout);
    
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int q; cin >> q;
        int p; cin >> p;
        cows.insert(make_pair(q,p));
    }
    int wait = 0;
    for(auto& cow : cows){
        int a = cow.first;
        ll b = cow.second;
        if(a >= wait){
            wait = a+b;
        } else {
            wait += b;
        }
    }
    cout << wait;
}
