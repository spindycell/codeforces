#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  for (int it = 1; ; it++) {
    if (it % 2) {
      if (a < it) {
        puts("Vladik");
        return 0;
      }
      a -= it;
    } else {
      if (b < it) {
        puts("Valera");
        return 0;
      }
      b -= it;
    }
    //cout << it << ' '<< a << ' ' << b << endl;
  }
  return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	long a,b;
	cin>>a>>b;
	a=sqrt(a);
	if(a*(a+1)>b)cout<<"Valera";
	else cout<<"Vladik";
}
*/
