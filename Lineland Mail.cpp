#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,kiri,kanan;
    cin >> n;
    int arr[n+5];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(i==0)kiri = arr[i];
        if(i==n-1)kanan = arr[i];
    }
    for(int i=0; i<n; i++){
        if(i==0){
            cout << abs(arr[i]-arr[i+1]) << ' ' << abs(arr[i]-arr[n-1]) << endl;
        } else if(i==n-1){
            cout << abs(arr[i]-arr[i-1]) << ' ' << abs(arr[i]-arr[0]) << endl;
        } else {
            cout << min(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1])) << ' ' << max(abs(arr[i]-kiri),abs(arr[i]-kanan)) << endl;
        }

    }

}
