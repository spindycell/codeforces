#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s,ans;
    cin >> s;
    ans = s;
    for(int i=0,j=n-1,idx=n-2,idy=n-1; i<n/2; i++,j--,idx-=2,idy-=2){
        ans[i]=s[idx];
        ans[j]=s[idy];
    }
    if(n%2==1)ans[n/2]=s[0];
    cout << ans << endl;
}
