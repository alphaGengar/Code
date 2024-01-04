#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x1,x2,x3,x4,x5,x6,y1,y2,y3,y4,y5,y6;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5 >> x6 >> y6;
    
    long long overlapA, overlapB, overlapC = 0, paper;
    paper = abs(x1-x2) * abs(y1-y2);
    overlapA = (max(x1, x3) - min(x2, x4)) * (max(y1, y3) - min(y2, y4));
    overlapB = (max(x1, x5) - min(x2, x6)) * (max(y1, y5) - min(y2, y6));

    long long overlapABx1 = max(x3, x5);
    long long overlapABx2 = min(x4, x6);
    long long overlapABy1 = max(y3, y5);
    long long overlapABy2 = min(y4, y6);


    long long allx1 = max(x1, overlapABx1);
    long long allx2 = min(x2, overlapABx2);
    long long ally1 = max(y1, overlapABy1);
    long long ally2 = min(y2, overlapABy2);
    overlapC = abs(allx1-allx2) * abs(ally1-ally2);
    if(x2 < x3 || x1 > x4){
        overlapA = -1;
    }
    if(x2 < x5 || x1 > x6){
        overlapB = -1;
    }
    if(overlapA < 0 && overlapB < 0){
        cout << "YES";
        return 0;
    }
    if(overlapA < 0){
        if(paper-overlapB > 0){
            cout << "YES";
            return 0;
        }
        cout << "NO";
        return 0;
    }
    if(overlapB < 0){
        if(paper-overlapA > 0){
            cout << "YES";
            return 0;
        }
        cout << "NO";
        return 0;
    }
    if(overlapC <= 0){
        if(paper - overlapA - overlapB > 0){
            cout << "YES";
            return 0;
        }
    }
    if(paper - overlapA - overlapB + overlapC > 0){
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}
