// http://codeforces.com/problemset/problem/160/A
//mengambil uang banyak denga jumlah koin yang sedikit agar tidak dicurigai
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,n=0,h=0,i,j;
    cin>>x;
    int a[x];
    for(i=0;i<x;i++){
        cin>>a[i];
        h+=a[i]; // menjumlahkan total uang
    }
    sort(a,a+x);
    for(i=0;2*n<=h;i++){ //jika n(jumlah uang yang diambil) dikali 2  > total uang maka berhenti
        n=n+a[x-i-1]; // n = menjumlah uang yang sudah diambil
    }
    cout<<i<<endl; // output jumlah koin yang diambil
}
