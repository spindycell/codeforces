#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,x;
    cin >> n >> a >> b;
    map<int,int> ans;
    for(int i=0; i<a; i++){
        cin >> x;
        ans[x]=1;
    }
    for(int i=0; i<b; i++){
        cin >> x;
        ans[x]=2;
    }
    for(int i=1; i<=n; i++){
        cout << ans[i] << ' ';
    }

}
