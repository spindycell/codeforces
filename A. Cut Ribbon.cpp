#include <bits/stdc++.h>
using namespace std;
int a,b,c,n,m=1,t,d;

int main(){

	cin>>n>>a>>b>>c;
	for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            t=n-a*i-b*j;
            if(t>=0&&t%c==0){
                m=max(m,i+j+t/c);
            }
        }
    }
	cout<<m;
}
