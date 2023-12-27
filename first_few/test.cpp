#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
int num;
vector<int> x;
vector<int> y;
int record = 0;

int main() {
    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);
    cin >> num;
    for(int i = 0; i < num; i++){
        int in;
        cin >> in;
        x.push_back(in);
        cin >> in;
        y.push_back(in);
        if(i > 1){
            for(int j = 0; j < i; j++){
                if(x[i] == x[j]){
                    int dy = abs(y[i] - y[j]);
                    int dx = 0;
                    for(int k = 0; k < i; k++){
                        if(k != j){
                            if(y[i] == y[k]){
                                dx = abs(x[i] - x[k]);
                            } else if(y[j] == y[k]){
                                dx = abs(x[j] - x[k]);
                            }
                            record = max(record, dx*dy);
                        }
                    }

                } else if(y[i] == y[j]){
                    int dx = abs(x[i] - x[j]);
                    int dy = 0;
                    for(int k = 0; k < i; k++){
                        if(k != j){
                            if(x[i] == x[k]){
                                dy = abs(y[i] - y[k]);
                            } else if(x[j] == x[k]){
                                dy = abs(y[j] - y[k]);
                            }
                            record = max(record, dx*dy);
                        }
                    }
                }
            }    
        }
    }
    cout << record;
}
