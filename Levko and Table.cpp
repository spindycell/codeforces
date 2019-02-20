#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,ans;
    cin >> n >> k;
    int arr[n+1][n+1];
    ans = k - (n-1);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j==i)cout << ans << ' ';
            else cout << 1 << ' ';
        }
        cout << endl;
    }
}
