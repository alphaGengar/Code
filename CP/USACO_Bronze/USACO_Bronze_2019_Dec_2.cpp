#include <bits/stdc++.h>
using namespace std;

bool contained(string& x, string& y){
    int coun = 0;
    for(int i = 0; i + x.size() <= y.size(); i++){
        if(y.substr(i, x.size()) == x){
            coun++;
        }
    }
    if(coun <= 1){
        return false;
    }
    return true;
}


int main() {
    freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);

    int n; cin >> n;
    string colors; cin >> colors;

    int min = colors.size();
    string test = "IXMV";
    for(int sizes = 1; sizes <= min; sizes++){
        int found = 0;
        for(int i = 0 ; i + sizes <= min; i++){
            string subset = colors.substr(i, sizes);
            if(contained(subset, colors)){
                found++;
            }
        }
        if(found < 2){
            cout << sizes;
            return 0;
        }
    }
}
