#include <bits/stdc++.h>
using namespace std;

#define FOR(i, j, k) for(int i = j; i < k; ++i)

int main() {
    freopen("backforth.in", "r", stdin);
    freopen("backforth.out", "w", stdout);
    
    vector<int> s1(10);
    vector<int> s2(10);

    FOR(i, 0, 10){
        cin >> s1[i];
    }
    FOR(i, 0, 10){
        cin >> s2[i];
    }

    set<int> answers;
    
    FOR(tues, 0, s1.size()){
        int tue = s1[tues];
        vector<int> tus1(s1.begin(), s1.end());
        vector<int> tus2(s2.begin(), s2.end());

        auto it1 = find(tus1.begin(), tus1.end(), tue);
        if (it1 != tus1.end()) {
            tus1.erase(it1);
        }
        tus2.push_back(tue);

        FOR(wedn, 0, tus2.size()){
            int wed = tus2[wedn];
            vector<int> ws1(tus1.begin(), tus1.end());
            vector<int> ws2(tus2.begin(), tus2.end());

            auto it2 = find(ws2.begin(), ws2.end(), wed);
            if (it2 != ws2.end()) {
                ws2.erase(it2);
            }

            ws1.push_back(wed);
            FOR(thur, 0, ws1.size()){
                int thu = ws1[thur];
                vector<int> ths1(ws1.begin(), ws1.end());
                vector<int> ths2(ws2.begin(), ws2.end());

                auto it3 = find(ths1.begin(), ths1.end(), thu);
                if (it3 != ths1.end()) {
                    ths1.erase(it3);
                }

                ths2.push_back(thu);

                FOR(frid, 0, ths2.size()){
                    int fri = ths2[frid];
                    vector<int> fs1(ths1.begin(), ths1.end());
                    vector<int> fs2(ths2.begin(), ths2.end());

                    auto it4 = find(fs2.begin(), fs2.end(), fri);
                    if (it4 != fs2.end()) {
                        fs2.erase(it4);
                    }

                    fs1.push_back(fri);
                    int answer = 1000 - tue + wed - thu + fri;
                    answers.insert(answer);
                }
            }
        }
    }
    cout << answers.size() << endl;
    return 0;
}
