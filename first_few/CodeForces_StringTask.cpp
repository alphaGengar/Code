#include <bits/stdc++.h>
using namespace std;

int main(){
    string alphabet = "bBcCdDfFgGhHjJkKlLmMnNpPqQrRsStTvVwWxXzZ";
    string vowels = "aAeEiIoOuUyY";
    string in; cin >> in;

    for(auto& i : in){


        for(int j = 0; j < alphabet.size(); j++){
            if(alphabet[j] == i){

                if(j%2 == 0){
                    cout << "." << i;
                } else {
                    cout << "." << alphabet[j-1];
                }

            }            

        }


    }
}
