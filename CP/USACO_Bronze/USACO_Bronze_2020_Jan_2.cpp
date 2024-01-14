#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("photo.in", "r", stdin);
    freopen("photo.out", "w", stdout);
    int n; cin >> n;
    vector<int> bessie(n-1);
    for(int i = 0; i < n-1; i++){cin >> bessie[i];}

    vector<int> solution(n), permutation_checker(n);
    for(int i = 0; i < n; i ++){permutation_checker[i] = i+1;}
    
    for(int i = 0;i < n; i++){
        solution[0] = i+1;
        for(int j = 1; j < n; j++){
            solution[j] = bessie[j-1] - solution[j-1];
        }
        vector<int> check = solution;
        sort(check.begin(), check.end());

        if(check == permutation_checker){
            for(int j = 0; j < check.size(); j++){
                cout << solution[j];
                if(j < check.size()-1){
                    cout << ' ';
                }
            }
            return 0;
        }
    }
}
