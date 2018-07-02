#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n,m,a[52],mn=1001;
    for(cin>>n>>m,i=0; i<m; cin>>a[i],i++);
    sort(a,a+m);

    for(i=0; i<=m-n; i++){
        mn = min(mn,a[i+n-1]-a[i]);
    }
    cout<<mn;
}
