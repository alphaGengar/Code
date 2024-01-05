#include <bits/stdc++.h>
using namespace std;



vector<int> count(string vec){

    map<char, int> counter;
    vector<int> coun;
    for(auto& i : "abcdefghijklmnopqrstuvwxyz"){
        counter[i] = 0;
    }
    for(auto& c : vec){
        counter[c]++;
    }

    for(auto& i : "abcdefghijklmnopqrstuvwxyz"){
        coun.push_back(counter[i]);
    }

    return coun;
}


int main() {
    
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);
  
    vector<int> answer(26);

    vector<string> words1;
    vector<string> words2;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        string q, p;
        cin >> q >> p;
        words1.push_back(q);
        words2.push_back(p);
    }

    for(int i = 0; i < n; i++){

        vector<int> now;
        vector<int> temp1 = count(words1[i]);
        vector<int> temp2 = count(words2[i]);
        for(int i = 0; i < temp1.size(); i++){
            int curr = max(temp1[i], temp2[i]);
            now.push_back(curr);
        }

        for(int j = 0; j < now.size(); j++){
            answer[j] += now[j];
        }

    }

    for(auto& i : answer){
        cout << i << "\n";
    }

}
