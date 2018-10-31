#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
    vector<int> arr;
    cin >> n;
    while(n--){
        cin >> m;
        arr.push_back(m);
    }
    sort(arr.begin(),arr.end());
    for(vector<int>::const_iterator i = arr.begin(); i != arr.end(); ++i){
        cout << *i << " ";
    }
}
// time 15ms memmory 1800
/*
#include<stdio.h>
int i,n,x,C[101];
int main(){
    for(scanf("%d",&n);i<n;i++){
        scanf("%d",&x),C[x]++;
    }
    for(i=0;i<101;i++)
    while(C[i]--)printf("%d ",i);
    return 0;
}
*/
