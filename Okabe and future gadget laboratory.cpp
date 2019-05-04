#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("./a.in","r",stdin);
		freopen("./a.out","w",stdout);
	#endif
	int n;
	cin >> n;
	int arr[n+5][n+5];
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> arr[i][j];
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(arr[i][j]>1){
				int idx=i,idy=j;
				bool ok = false;
				for(int x=1; x<=n; x++){
					for(int y=1; y<=n; y++){
						if(arr[idx][x]+arr[y][idy]==arr[i][j]){
							ok = true;
							break;
						}
					}
				}
				if(!ok){
					cout << "No\n";
					return 0;
				}
			}
		}
	}
	cout << "Yes\n";
	return 0;


}