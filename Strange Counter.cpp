#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x=3,pos=1,cari=3;
    while(n>x){ //selama n lebih dari x kalikan x dengan 2
        cari = cari*2;
        x += cari;
        pos++;  //simpan posisinya untuk debugging
    }
    //cout << x << " " << pos << " " << cari <<endl;
    int ans = 1;
    for(int i=x; i>n; i--){ //hitung dari angka terbesar hingga yang dicari
        ans++;
    }
    cout << ans << endl;
}
