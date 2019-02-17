#include<bits/stdc++.h>
using namespace std;

int n,ans=0,batas=0,big=0;

int main(){
    cin >> n;
    int arr[n+5];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        big = max(big,arr[i]);
        batas+=arr[i];
    }
    while(big*n-batas<=batas){
        big++;
    }
    cout << big << endl;


}
