#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,idx=0,ans=0,temp=INT_MAX;
    cin >> n;
    int sum[n];
    for(int i=0; i<n; i++){
        int x;
        cin >>x;
        sum[i]=x;
        if(temp>=x)ans++;
        temp=x;
    }
   // cout << ans << endl;
    vector<vector<int> > arr(ans);
    arr[0].push_back(1);
    for(int i=1; i<n; i++){
        if(sum[i-1]>=sum[i])idx+=1;
        //cout << idx << ' ';
        arr[idx].push_back(sum[i]);
    }
    cout << arr.size() << endl;
    for(int i=0; i<arr.size(); i++){
        cout << arr[i].size() << ' ';
    }

}
