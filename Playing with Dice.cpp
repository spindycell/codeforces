#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a=0,b=0,d=0;
    cin >> n >> m;
    for(int i=1; i<=6; i++){
        if(abs(i-n)<abs(i-m)) a++;
        else if(abs(i-n)>abs(i-m)) b++;
        else d++;
    }
    cout << a << ' ' << d << ' ' << b << endl;
}
