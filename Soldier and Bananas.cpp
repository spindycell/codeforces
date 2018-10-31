#include <bits/stdc++.h>
using namespace std;

int k,n,w,c;

int main(){
    cin>>k>>n>>w; // k harga pisang pertama, n uang yang dipunya, w jumlah pisang yang mau dibeli
    cout<<max(0,(k*(1+w)*w)/2-n); // max untuk kondisi tidak memiliki uang
}   // output uang tambahan yang diperluukan

/* cara nub
#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w,jumlah=0;
    cin >> k >> n >> w;
    for(int i=1; i<=w; i++){
        jumlah=jumlah+i*k;
    }
    if(jumlah-n>=0){
        cout << jumlah-n;
    } else {
        cout << 0;
    }
    cout << endl;

	return 0;
}
*/
