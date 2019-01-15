#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    string s;
    cin >> n >> m;
    cin >> s;
    for(int i=0; i<m; i++){
        int l,r;
        char a,b;
        cin >> l >> r >> a >> b;
        for(int j=l-1; j<=r-1; j++){
            if(s[j]==a) s[j]=b;
        }
    }
    cout << s << endl;
}
