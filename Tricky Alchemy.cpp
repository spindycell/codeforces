#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll a,b,x,y,z;

int main(){
	cin >> a >> b;
	cin >> x >> y >> z;
	cout << max(0LL,(x*2+y)-a) + max(0LL,(z*3+y)-b)<<"\n";
}
