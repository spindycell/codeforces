#include <bits/stdc++.h>
using namespace std;
int a,b,c,n,m=1,t,d;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n>>a>>b>>c;
	for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            t=n-a*i-c*j;
            if(t>=0&&t%b==0){
                m=max(m,i+j+t/b);
            }
        }
    }
	cout<<m <<endl;
}
