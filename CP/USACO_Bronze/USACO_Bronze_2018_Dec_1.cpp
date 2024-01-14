#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    vector<int> c, a;
    c.resize(3);
    a.resize(3);
    for(int i  = 0; i < 3; i++){
        cin >> c[i];
        cin >> a[i];
    }
    for(int i = 0; i < 100; i++){
        int mod = i%3;
        int mod2 = (i+1)%3;
        int p = min(a[mod], c[mod2] - a[mod2]);
        a[mod] -= p;
        a[mod2] += p;
    }

    for(auto& i : a){
        cout << i << '\n';
    }
}
