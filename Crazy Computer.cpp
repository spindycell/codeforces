#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,x,temp,ans=1;
    cin >> n >> m;
    cin >> x;
    temp = x;
    for(int i=1; i<n; i++){
        cin >> x;
        if(x-temp<=m)ans++;
        else ans=1;
        temp = x;
    }
    cout << ans <<endl;
}
