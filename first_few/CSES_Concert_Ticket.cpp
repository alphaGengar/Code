#include <iostream>
#include <algorithm>
#include <tuple>
#include <vector>
#include <string>
#include <set>
#include <map>
using namespace std;

const int max_size = 2e5;
int n, m;
int p[max_size];
int c[max_size];

int main() {
    cin >> n >> m;
    for(int i= 0; i < n; i ++) {cin >> p[i];}
    for(int i= 0; i < m; i ++) {cin >> c[i];}

    for(int i= 0; i < m; i ++){
        auto record = 10e9;
        int index;
        for(int j = 0; j < n; j++){
            if(p[j] >= 0 && c[i] - p[j] < record && c[i] - p[j] >= 0){
                record = c[i] - p[j];
                index = j;
            }
        }
        if(record == 10e9){
            cout << "-1" << '\n';
        } else {
            cout << p[index] << '\n';
            p[index] = -1;
        }
    }
    return 0;
}
