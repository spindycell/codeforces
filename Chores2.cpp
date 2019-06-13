#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    int arr[n+5];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n,greater<int>());
    int mid = arr[a-1];
    int ans = mid - arr[a];
    cout << ans << endl;

}
