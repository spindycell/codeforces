#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    int idx=0;
    for(int i=0; i<t.length(); i++){
        if(s[idx]==t[i]) idx++;
    }
    cout << idx+1 << endl;
}
