#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,a,b,c;
    bool ok = false;
    cin >> n;
    a=n/3;
    b = n-(a*2);
    a-=2;
    while(!ok){
        if(a%3!=0 and b%3!=0 and (a*2)+b==n)
            break;
        a++;
        b = n-(a*2);
    }
    cout << a <<' '<< a <<' '<< b << endl;
}
