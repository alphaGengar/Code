#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("lineup.in", "r", stdin);
    freopen("lineup.out", "w", stdout);
    int n; cin >> n;
    vector<pair<string, string>> res;
    for(int i = 0; i < n; i++){
        string f, l, t;
        cin >> f >> l >> l >> l >> l >> t;
        res.push_back(make_pair(f,t));
    }
    vector<string> cows = {"Bessie", "Buttercup", "Belinda", "Beatrice",
	                       "Bella",  "Blue",      "Betsy",   "Sue"};
	sort(cows.begin(), cows.end());


    while(next_permutation(cows.begin(), cows.end())){
        bool yes = true;
        for(auto p : res){
            string cow1 = p.first;
            string cow2 = p.second;
            auto dist1 = find(cows.begin(), cows.end(), cow1);
            auto dist2 = find(cows.begin(), cows.end(), cow2);
            if(abs(dist1-dist2)  != 1){
                yes = false;
            }
        }
        if(yes){
            break;
        }
    }
    for(auto i : cows){
        cout << i << '\n';
    }
}


