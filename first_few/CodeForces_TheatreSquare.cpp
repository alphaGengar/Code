#include <bits/stdc++.h>
using namespace std;


int main() {

    double n, m, a;

    cin >> n >> m >> a;


    double ratio1 = ceil(n / a);
    double ratio2 = ceil(m / a);

    long long out1 = ratio1;
    long long out2 = ratio2;

    cout << out1*out2;


}
