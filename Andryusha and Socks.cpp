#include<bits/stdc++.h>
#include <bits/stdc++.h>

using namespace std;

int n,x,cnt,res,f[1<<17];

int main(){
	cin>>n;
	for(int i=0; i<n+n; i++){
		scanf("%d",&x);
		if(!f[x])
			cnt++,f[x]=1;
		else
			cnt--;
		res=max(res,cnt);
	}
	cout<<res<<endl;
}
/*
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int n,maks=0,ans=-1;
    cin >> n;
    vector<int> arr(n+5,2);

    for(int i=0; i<n*2; i++){
        int x;
        cin >> x;
        if(arr[x]==2) maks++;
        else maks--;
        arr[x]--;
        ans = max(ans,maks);
    }
    cout << ans << endl;
}
*/
