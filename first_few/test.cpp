#include <iostream>
#include <algorithm>
#include <tuple>
#include <vector>
#include <string>
#include <set>
#include <map>
using namespace std;
int len, lights;
set<int> street;

int main() {
    cin >> len >> lights;
    street.insert(0);
    street.insert(len);
    for(int i = 0; i < lights; i ++){
        int record = 1;
        int input;
        cin >> input;
        street.insert(input);
        for(auto j = ++street.begin(); j != street.end(); j++){
            if(*j - *(prev(j)) > record){
                record = *j - *(prev(j));
            }
        }
        cout << record << ' ';
    }
}
