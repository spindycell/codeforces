#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k,ans=1e9;;
    cin >> n >> m >> k;
    for(int i=1; i<=n; i++){
        int x;
        cin >> x;
        if(x>0 && x<=k){
            ans = min(ans,abs(i-m));
        }
    }
    cout << ans*10 << endl;
}
