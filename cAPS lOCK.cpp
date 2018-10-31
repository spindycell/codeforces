#include<bits/stdc++.h>
using namespace std;
string S;
bool u = 1; // 1 = true
int main(){
    cin >> S;
    for(int i = 1;i<S.length();i++){
        if(S[i] >= 97){ // jika ada huruf kecil setelah huruf pertama->(index 0)
           u = false;
        }
    }
    if(u){ //ketika u true
        for(int i = 0;i<S.length();i++){
            if(S[i] < 97){ // jika huruf kapiatal
                S[i] = tolower(S[i]);
            }
            else{
                S[i] = toupper(S[i]);
            }
        }
    }
    cout << S;
}
