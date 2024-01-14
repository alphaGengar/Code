#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);
    int b1, b2, m; cin >> b1 >> b2 >> m;
    int answer = 0;
    if(m%b2 == 0 || m%b1 ==0){
        cout << m;
    } else {
        int small = min(b1, b2);
        int large = max(b1, b2);
        int max1 = m / small;
        int min2 = m / large;
        answer = max(small*max1, large*min2);
        
        vector<int> counter(max1);
        for(int i = min2; i <= max1; i++){
            for(int j = 0; j < i; j++){counter[j] = small;}
            for(int k = 0; k < i; k++){
                counter[k] = large;
                int count = 0;
                for(auto& l : counter){
                    count += l;
                }

                if(count <= m && count > answer){
                    answer = count;
                }
            }    
        }
    cout << answer;
    }
}
