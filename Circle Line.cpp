#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,s=0,t=0;
    cin>>n;
    int d[n];
    for (int i=1;i<=n;i++){
        cin>>d[i];
        s+=d[i];
    }
    cin>>a>>b;
    if (a>b)swap(a,b);

    for (int i=a;i<b;i++)
        t+=d[i];
    cout<<min(t,s-t)<<endl;
}
