// mencari banyak langkah yang diperlukan untuk mengunjungi tiap titik
#include<bits/stdc++.h>
using namespace std;
long long n,m,x,hasil,j=1;
int main(){
    cin >> n >> m;
    for(int i=1; i<=m; i++){
        cin >> x;
        if(j>x){        // jika posisi x kurang dari j
            j = j-n;    // maka harus memutar dengan dikurangi n
        }
        hasil = hasil + (x-j);
        j = x;          // memberi nilai j = x
    }
    cout << hasil << endl;
}
