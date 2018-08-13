#include<bits/stdc++.h>
using namespace std;
int n,maks,mins=10000,j=1,indxMax,indxMin;
int main(){
    cin >> n;
    int m[n];
    for(int i=1; i<=n; i++){ // input serta mencari posisi indexx terbesar
        cin >> m[i];
        if(m[i] > maks){
            maks = m[i];
            indxMax = i;
        } else if(m[i] == maks){
            continue;
        }
    }
    for(int i=1; i<=n; i++){ // input serta mencari posisi index terkecil
        if(m[i] < mins){
            mins = m[i];
            indxMin = i;
        } else if(m[i] == mins){
            indxMin = i;
        }
    }
        cout << indxMax-(indxMax<indxMin) + n-indxMin <<endl; // dalam kurung akan mengeluarkan 1 jika true , 0 jika false.
}

// smart way
/*
#include<iostream>
using namespace std;

int n,i,p,q=99,x,a,b;

int main(){
	for(cin>>n;i++<n;){
		cin>>x,x>p?p=x,b=i:0,x<=q?q=x,a=i:0;
	}
	cout<<n+b-a-1-(b>a);
	return 0;
}
*/
