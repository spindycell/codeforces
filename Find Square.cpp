#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int n,m,i=-1,j=-1;
	cin >> n >> m;
	while(j<0){
        cin >> s;
        j=s.find('B');
        i++;
    }
    int c=(s.rfind('B')-s.find('B'))/2+1;
	cout << i+c << ' ' << j+c;
}
