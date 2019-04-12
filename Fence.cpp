#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,k;
    cin >> n >> k;
    ll ans=0,temp,depan=1,jaw=1;
    ll arr[n+5];
    for(int i=1; i<=n; i++){
        cin >> arr[i];
        if(i<=k) ans+=arr[i];
    }
    temp = ans;
    for(int i=k+1; i<=n+1; i++){
        if(ans>temp){
            ans = temp;
            jaw = i-k;
        }
        temp = (temp-arr[depan])+arr[i];
        depan++;
    }
    cout << jaw << endl;
}
/*
#include<bits/stdc++.h>
using namespace std;

int n,k,ans,dp[200005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    cin >> n >> k;
    for(int i=1; i<=n; i++){
        cin >> dp[i];
        dp[i]+=dp[i-1];
    }
    for(int i=1; i<=n-k; i++){
        if(dp[ans+k]-dp[ans]>dp[i+k]-dp[i])
            ans=i;
    }
    printf("%d\n",ans+1);
}

*/
