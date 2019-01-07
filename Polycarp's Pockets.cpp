#include<bits/stdc++.h>
using namespace std;
int arr[1005];
int main(){
    int n,ans=0;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr[x]++;
        if(arr[x]>ans)ans=arr[x];
    }
    cout << ans<< endl;
}
