#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);
    int j; cin >> j;
    int b; cin >> b;
    int a = j;
    int steps = 1;
    int counter = 0;
    if(b > j){
        for(int i = 0; b > j; i++){
            counter = counter + abs(steps) + abs(a-j);
            j = j + steps + a-j;
            if(j > b){
                do{
                    j--;
                    counter--;
                } while (j != b);
                steps = steps*-2;
            }
            steps = steps*-2;
        }
    } else if(b < j){
        for(int i = 0; b < j; i++){
            counter = counter + abs(steps) + abs(a-j);
            j = j + steps + a-j;
            if(b > j){
                do{
                    j++;
                    counter--;
                } while (j != b);
            }
            steps = steps*-2;
        }
    }
    cout << counter;
}
