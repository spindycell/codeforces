#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,delapan=0,ans=0;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0; i<n; i++){
        if(s[i]=='8') delapan++;
    }
    ans = n/11;
    cout << min(delapan,ans) << endl;
}
