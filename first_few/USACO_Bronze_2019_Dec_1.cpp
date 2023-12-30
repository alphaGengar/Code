#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pint;

vector<pint> intersection(const vector<pint> &vec1, const vector<pint> &vec2){
    vector<pint> result;
    set_intersection(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), back_inserter(result));
    return result;
}



int main() {
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);

    int sessions; cin >> sessions;
    int num; cin >> num;
    
    vector<pint> consistent;
    vector<int> before(num);
    for(int i = 0; i < num; i++){cin >> before[i];}
    for(int i = 0; i < num; i++){
        for(int j = i+1; j < num; j++){
            pint temp = make_pair(before[i], before[j]);
            consistent.push_back(temp);
        }
    }
    sort(consistent.begin(), consistent.end());
    for(int sess = 1; sess < sessions; sess++){
        vector<int> current(num);
        vector<pint> current_consistent;
        for(int i = 0; i < num; i++){cin >> current[i];}
        
        for(int i = 0; i < num; i++){
            for(int j = i+1; j<num; j++){
                pint temp = make_pair(current[i], current[j]);
                current_consistent.push_back(temp);
            }
        }
        sort(current_consistent.begin(), current_consistent.end());
        consistent = intersection(consistent, current_consistent);    
    }
    cout << consistent.size();
}
