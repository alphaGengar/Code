#include <bits/stdc++.h>
using namespace std;

bool covered(int z, int q, int z1, int q1, int z2, int q2){
    if(min(z1, z2) <= z){
        
        if(min(q1, q2) <= q){

            if(max(q1, q2) >= q){

                if(max(z1, z2) >= z){

                    return true;

                }
            }
        }
    }
    return false;
}



int main(){
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    int areaBad = abs((x2-x1) * (y1-y2));
    int areaGod = abs((x4-x3) * (y4-y3));
    int areaOverlap = (max(x1, x3) - min(x2, x4)) * (max(y1, y3) - min(y2, y4));
    
    //if(areaOverlap <= 0){
      //  cout << areaBad;
        //return 0;
    //}
    if(areaOverlap == areaBad){
        cout << 0;
        return 0;
    }
    int cov = 0;
    if(covered(x1, y1, x3, y3, x4, y4)){cov++;}
    if(covered(x2, y2, x3, y3, x4, y4)){cov++;}
    if(covered(x1, y2, x3, y3, x4, y4)){cov++;}
    if(covered(x2, y1, x3, y3, x4, y4)){cov++;}
    
    if(cov == 1 || cov == 0){
        cout << areaBad;
        return 0;
    }
    cout << areaBad - areaOverlap;
}
