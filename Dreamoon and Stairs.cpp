#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,ans=0;
    cin >> n >> m;
    if(n<m) cout << -1 <<endl;
    else {
        if(n%2==0) ans = n/2;
        else ans = n/2+1;
        while(ans%m!=0){
            ans++;
        }
        cout << ans <<endl;
    }
}
