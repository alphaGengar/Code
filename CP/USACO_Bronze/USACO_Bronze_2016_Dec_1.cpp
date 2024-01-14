#include <bits/stdc++.h>
using namespace std;

int main() { 
    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);
    
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    int distx = max(abs(x3-x4), max(abs(x1 - x2), max(abs(x1-x4), abs(x2-x3))));
    int disty = max(abs(y3-y4), max(abs(y1-y2), max(abs(y1-y4), abs(y2-y3))));
    int answer = max(distx, disty);
    answer = pow(answer, 2);
    cout << answer;
}
