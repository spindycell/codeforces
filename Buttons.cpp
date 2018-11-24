//http://codeforces.com/problemset/problem/268/B
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,ans=0;
    cin >> n;
    int j=1;
    for(int i=1; i<=n; i++){
        if(j==n)--j;
        ans += (n-j)*i;
        j++;
    }
    cout << ans <<endl;

    //cout << n*(n*n+5)/6; gini juga bisa
}
