#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    int arr[3];
    memset(arr,0,sizeof(arr));
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr[x%2]++;
        sum+=x;
    }
    if(sum%2) cout << arr[1] << endl;
    else cout << arr[0] << endl;

}
