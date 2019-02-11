#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,ans=0;
    cin >> n >> m;
    vector<int> arr(n+1);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end(),greater<int>());
    int k=0;
    while(m>ans){
        ans+=arr[k];
        k++;
    }
    cout << k << endl;
}
