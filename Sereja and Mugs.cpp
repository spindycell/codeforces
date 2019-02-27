#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,x,ans=0;
    cin >> n >> m;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<n-1; i++){
        ans+=arr[i];
        if(ans > m){
            cout << "NO" <<endl;
            return 0;
        }
    }
    cout << "YES" <<endl;
}
