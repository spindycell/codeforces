#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ans=0,x;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        ans+=abs(x);
    }
    cout << ans <<endl;
}
