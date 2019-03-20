#include<bits/stdc++.h>
using namespace std;
int n,m,a,b,x,y,ans,mins;

int main(){

    cin >> n >> m;
    cin >> a >> b;
    cin >> x >> y;
    ans = n;
    for(int i=m; i>=1; i--){
        ans += i;
        if(i==b){
            ans-=a;
            if(ans<0) ans=0;
        }
        if(i==y){
            ans-=x;
            if(ans<0) ans=0;
        }
    }
    cout << ans << endl;
}
