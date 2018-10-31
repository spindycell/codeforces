// separate even and odd number then you search what number in the m
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m;
    cin >> n >> m;
    if(m > (n+1)/2)
    cout << 2*(m-(n+1)/2);
    else
    cout << 2*m-1;

    return 0;
}
