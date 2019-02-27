#include<bits/stdc++.h>
using namespace std;

int main(){
    char x,ans;
    while(cin >> x && x!='?'){
        ans=x;
    }
    if(strchr("AEIOUYaeiouy",ans)){
        cout << "YES\n";
    } else
        cout << "NO\n";
}
