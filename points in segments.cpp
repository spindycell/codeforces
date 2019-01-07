#include <bits/stdc++.h>
using namespace std;
set <int> s;
int n,m,i;
int main() {
    for(cin>>n>>m;i<m;i++)s.insert(i+1);
    for(;cin>>n>>m;)for(i=n;i<=m;i++)s.erase(i);
    cout<<s.size()<<endl;
    for(auto i:s)cout<<i<<' ';
}
