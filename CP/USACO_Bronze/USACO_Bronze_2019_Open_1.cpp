#include <bits/stdc++.h>
using namespace std;
#define FOR(i, j, k) for(int i = j; i < k; i++)

int main() {
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);
    int Bi, Ri, Li;
    int Br, Rr, Lr;


    for(int i = 0; i < 10; i++){
        string temp;
        cin >> temp;

        if(temp.find('B') != string::npos){
            Bi = temp.find('B');
            Br = i;
        }
        if(temp.find('R') != string::npos){
            Ri = temp.find('R');
            Rr = i;
        }
        if(temp.find('L') != string::npos){
            Li = temp.find('L');
            Lr = i;
        }
    }
    if(Li == Bi && Li == Ri && (( Rr > Lr  && Rr < Br ) ||  (Rr < Lr  && Rr > Br))){

        cout << abs(Br-Lr)+1;
        return 0;    
    }
    if(Lr == Br && Lr == Rr &&((Ri > Li  && Ri < Bi) || (Ri < Li && Ri > Bi))){
        cout << abs(Bi-Li)+1;
        return 0;
    }

    int ans = abs(Lr - Br) + abs(Li - Bi);
    cout << ans - 1;
}
