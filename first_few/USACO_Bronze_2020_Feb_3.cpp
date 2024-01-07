#include <bits/stdc++.h>
using namespace std;


vector<int> reverse(vector<int>& vec, int start, int end, int num){

    vector<int> ret = vec;
    vector<int> temp1(vec.begin()+start-1, vec.end() - (num-end));
    vector<int> temp;
    for(int i  = temp1.size() - 1; i >= 0; i--){
        temp.push_back(temp1[i]);
    }

    for(int q = start-1; q < end; q++){
        ret[q] = temp[q-start+1];
    }
    return ret;
}


int main() {
    freopen("swap.in", "r", stdin);
    freopen("swap.out", "w", stdout);

    int n; int k; 
    cin >> n >> k;

    vector<int> numbers;

    for(int i = 1; i < n+1; i++){
        numbers.push_back(i);
    }
    int l = 0;

    int start1, end1, start2, end2;
    cin >> start1 >> end1 >> start2 >> end2;

    vector<int> checker (numbers.begin(), numbers.end());

    while(true){
        checker = reverse(checker, start1, end1, n);
        checker = reverse(checker, start2, end2, n);
        l++;
        bool stop = true;
        for(int i = 0; i < n; i++){
            if(checker[i] != numbers[i]){
                stop = false;
                break;
            }
        }
        if(stop){
            break;
        }
    }

    
    for(int i = 0; i < k%l; i++){
        numbers = reverse(numbers, start1, end1, n);
        numbers = reverse(numbers, start2, end2, n);
    }

    for(auto&i : numbers){
        cout << i << '\n';
    }

}
