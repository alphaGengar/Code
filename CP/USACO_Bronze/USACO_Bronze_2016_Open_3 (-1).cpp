
#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("reduce.in", "r", stdin);
    freopen("reduce.out", "w", stdout);

    int n;
    cin >> n;
    int x1 = 0;
    int x2 = 0;
    int x3 = 4000;
    int x4 = 4000;
    int y1 = 0;
    int y2 = 0;
    int y3 = 4000;
    int y4 = 4000;

    vector<int> xx(n);
    vector<int> yy(n);

    int ix = 0, ix2 = 0, iy = 0, iy2 = 0;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        xx[i] = x;
        yy[i] = y;

        if(x > x1){
            x1 = x;
            x2 = xx[ix];
            ix = i;
        }
        if(x > x2 && i != ix){
            x2 = x;
        }

        if(x < x3){
            x3 = x;
            x4 = xx[ix2];
            ix2 = i;
        }
        if(x < x4 && i != ix2){
            x4 = x;
        }


        if(y > y1){
            y1 = y;
            y2 = yy[iy];
            iy = i;
        }
        if(y > y2 && i != iy){
            y2 = y;
        }

        if(y < y3){
            y3 = y;
            y4 = yy[iy2];
            iy2 = i;
        }
        if(y < y4 && i != iy2){
            y4 = y;
        }

    }

    int answer = (x1-x3) * (y1-y3);
    for(int i = 0; i < n; i++) {
		int xMin = x1;
		if(xx[i] == xMin) {
			xMin = x2;
		}
		int xMax = x3;
		if(xx[i] == xMax) {
			xMax = x4;
		}
		int yMin = y1;
		if(yy[i] == yMin) {
			yMin = y2;
		}
		int yMax = y3;
		if(yy[i] == yMax) {
			yMax = y4;
		}
        answer = min({answer, (xMin - xMax)*(yMin - yMax)});
	}

    cout << answer;
}
