#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    freopen("measurement.in","r", stdin);
    freopen("measurement.out","w", stdout);

    int m;
    cin >> m;
    set<tuple<int, string, int>> log;
    for(int i = 0; i < m; i++){
        int a; cin >> a;
        string b; cin >> b;
        int c; cin >> c;
        log.insert(make_tuple(a, b, c));
    }
    int tracker = 0;
    vector<int> standings(3, 5);
    for(int i = 0;i < m; i++){
        auto it = log.begin();

        
        auto past = max_element(standings.begin(), standings.end());
        vector<int> pastt(3, 0);
        for (int i = 0; i < 3; i++) {
            pastt[i] = (standings[i] == *past) ? 1 : 0;
        }

        advance(it, i);

        string name = get<1>(*it);
        if(name == "Mildred"){
            standings[0] += get<2>(*it);
        } else if(name == "Elsie"){
            standings[1] += get<2>(*it);
        } else if(name == "Bessie"){
            standings[2] += get<2>(*it);
        }

        auto newe = max_element(standings.begin(), standings.end());
        vector<int> neww(3, 0);
        for (int i = 0; i < 3; i++) {
            neww[i] = (standings[i] == *newe) ? 1 : 0;
        }

        if(neww != pastt){
            tracker++;
        }
    }
    cout << tracker;

}
