#include<bits/stdc++.h>
using namespace std;

int n,t;
int main(){
    cin >> n >> t;
    int a[n],pos=1;

    for(int i=1; i<n; i++){
        cin >> a[i];
    }
    for(int i=1; i<=n; i++){
        if(i==pos){      // jika i berada pada posisi penjumlahan index
            pos += a[i]; // posisi menjumlahkan index
            if(i==t){    // jika target dilalui
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO" <<endl;
    return 0;
}
// cara mantap, triknya hanya menempatkan pos pada perulangan
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,j=0,a[30005];
    cin>>n>>k;

    for(int i = 1 ; i<n;i++)
        cin>>a[i];

    for(j=1;j<k;j+=a[j]);
        cout<<(j==k?"YES":"NO");
}
*/
