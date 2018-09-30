#include<bits/stdc++.h>
using namespace std;
int n,m,arr[5005],temp[5005],banyak,a[5005],b[5005],c[5005],o=1,p=1,q=1;
int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> m;
        if(m==1){
            a[o] = i;
            o++;
        } else if(m==2){
            b[p] = i;
            p++;
        } else {
            c[q] = i;
            q++;
        }
        arr[m]++;
    }

    banyak = min(arr[1],min(arr[2],arr[3]));
    cout << banyak <<endl;

    if(banyak>0){
        for(int i=1; i<=banyak; i++){
            cout << a[i] << " " << b[i] << " " << c[i] <<endl;
        }
    }
}
