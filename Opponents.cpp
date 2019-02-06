#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,d,ans=0,maks=0;
    cin >> n >> d;
    string s,jawaban="";
    for(int i=0; i<n; i++){
        jawaban+='1';
    }
    for(int i=0; i<d; i++){
        cin >> s;
        if(s!=jawaban) ans++;
        else ans=0;
        maks = max(maks,ans);
    }
    cout << maks <<endl;
}
