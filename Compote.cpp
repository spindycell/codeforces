#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,ans=7,solve;
    cin >> a >> b >> c;
    solve = min(min(a,b/2),c/4);
    cout << ans * solve << endl;
}
