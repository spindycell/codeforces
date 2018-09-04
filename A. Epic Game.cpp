#include <iostream>
#include <algorithm>
int a,b,n;

using namespace std;
int main(){
    cin>>a>>b>>n;
while(n!=0){
        n-=__gcd(a,n);
    if(n==0){
        cout<<0;
        return 0;
    }
        n-=__gcd(b,n);
    }

    cout<<1;
}
