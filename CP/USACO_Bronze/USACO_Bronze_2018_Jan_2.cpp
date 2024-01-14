#include <bits/stdc++.h>
using namespace std;


int intersection(vector<pair<int, int>>& vec){
    set<int> elm;
    for(int i = 0; i < vec.size(); i++){
        for(int j = vec[i].first; j < vec[i].second; j++){
            elm.insert(j);
        }
    }
    return elm.size();
}




int main() {
    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);

    int n; cin>>n;
    set<pair<int, int>> times; 
    for(int i = 0; i < n; i++){
        int q, p; cin >> q >> p;
        times.insert(make_pair(q,p));
    }
    vector<pair<int, int>> time;
    copy(times.begin(), times.end(), back_inserter(time));
    int record = 0;
    for(int i = 0; i < n; i++){
        vector<pair<int, int>> temp = time;
        temp.erase(temp.begin() + i);
        int te = intersection(temp);
        record = max(record, te);
    }
    cout << record; 
}
