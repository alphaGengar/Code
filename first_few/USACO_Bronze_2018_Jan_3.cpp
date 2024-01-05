#include <bits/stdc++.h>
using namespace std;


vector<int> find(vector<int>& vec, int item){
    vector<int> locations;
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] == item){
            locations.push_back(i);
        }
    }
    return locations;
}




int main() {
    freopen("outofplace.in", "r", stdin);
    freopen("outofplace.out", "w", stdout);

    int n; cin >> n;
    vector<int> cows(n), sorted;
    for(int i = 0; i < n; i ++){
        cin >> cows[i];
        sorted.push_back(cows[i]);
    }
    sort(sorted.begin(), sorted.end());

    int counter = 0;
    //for(auto& k : sorted){
    //    cout << k << "  ";
    //}
    //cout << '\n';
    //

    for(int i = sorted.size()-1; i >= 0; i--){
        //for(auto& j : cows){
        //    cout << j << "  ";
        //}
        //cout << '\n';
        if( sorted[i] != cows[i]  ){
            counter++;
            vector<int> temp = find(cows, sorted[i]);
            int want = temp[0];

            for(int j = 0; j < temp.size(); j++){
                if(sorted[temp[j]] == cows[i]){
                    want = temp[j];
                }
            }
            int te = cows[i];
            cows[i] = cows[want];
            cows[want] = te;
        }

    }

    cout << counter;


}
