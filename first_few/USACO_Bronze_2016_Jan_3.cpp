#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("mowing.in", "r", stdin);
    freopen("mowing.out", "w", stdout);
    vector<tuple<int, int, int>> visited;
    int q; cin >> q;
    int x = 0;
    int y = 0;
    int finale = -1;
    visited.push_back(make_tuple(0,0,0));
    int z = 0;
    for(int i = 0; i < q; i++){
        char l; cin >> l;
        int n; cin >> n;

        if(l == 'N' || l == 'E'){
            while(n--){
                z++;
                if(l == 'N'){
                    y++;
                }
                if(l == 'E'){
                    x++;
                }
                
                tuple<int, int, int> p = make_tuple(x,y,z);
                for(int j = visited.size() - 1; j >= 0; j--){

                    if(get<0>(visited[j]) == get<0>(p) && get<1>(visited[j]) == get<1>(p)){
                        int diff = get<2>(p) - get<2>(visited[j]);
                        j = -1;
                        if(diff < finale || finale == -1){
                            finale = diff;
                        }
                    }
                }
                visited.push_back(p);
            }
        }


        if(l == 'S' || l == 'W'){
            while(n--){
                z++;
                if(l == 'S'){
                    y--;
                }
                if(l == 'W'){
                    x--;
                }
            
                tuple<int, int, int> p = make_tuple(x,y,z);
                for(int j = visited.size() - 1; j >= 0; j--){

                    if(get<0>(visited[j]) == get<0>(p) && get<1>(visited[j]) == get<1>(p)){
                        int diff = get<2>(p) - get<2>(visited[j]);
                        j = -1;
                        if(diff < finale || finale == -1){
                            finale = diff;
                        }
                    }
                }
                visited.push_back(p);
            }
        }

    }
    cout << finale;
}
