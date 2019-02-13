#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z,temp;
    int a,b,c;
    cin >> x >> y >> z;
    cin >> a >> b >> c;
    a-=x;
	if(a+b<y||(a+b-y)+c<z||a<0){
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
	}
}
