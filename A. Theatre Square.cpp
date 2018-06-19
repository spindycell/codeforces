#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a;
    long long baris,kolom;
    cin>>n>>m>>a;

    if (n%a==0){
        baris=n/a;
    } else baris=n/a+1;
    if (m%a==0){
        kolom=m/a;
    } else kolom=m/a+1;

    cout<<baris*kolom<<endl;

    return 0;
}
