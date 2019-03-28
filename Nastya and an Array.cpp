#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n;
    set<int> arr;
    for(int i=0; i<n; i++){
        cin >> x;
        if(x!=0)arr.insert(x);
    }
    cout << arr.size() << endl;
}
