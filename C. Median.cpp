#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n,x,m,ans,wow,kanan,kiri;
vector<int> arr;
std::vector<int>::iterator it;

int main(){
    cin >> n >> x;
    int idx;
    if(n%2==0)idx=(n-1)/2;
    else idx = n/2;

    for(int i=0; i<n; i++){
        cin >> m;
        arr.push_back(m);
    }

    sort(arr.begin(),arr.end());
    if( (arr[idx]<x && arr[idx+1]>x) && n>1){
        cout << 1 <<endl;
        return 0;
    }

    it = std::find (arr.begin(), arr.end(), x);
    if (it != arr.end()){
        wow = it - arr.begin() + 1;
    } else {
        arr.push_back(x);
        sort(arr.begin(),arr.end());
        it = std::find (arr.begin(), arr.end(), x);
        if (it != arr.end()){
            wow = (it - arr.begin()) +1;
        }
        kanan = arr.size()-wow;
        kiri = wow-1;
        if(kiri > kanan) cout << (kiri-kanan)+1 <<endl;
        else cout << kanan-kiri << endl;
        return 0;
    }

    while(arr[idx]!=x){
        if(arr[idx]>x)arr.insert(arr.begin()+0,x);
        else arr.push_back(x);
        ans++;
        idx = n/2;
        n++;
    }
    cout << ans <<endl;
}

/*
4 2
1 1 1 3
4 2
1 3 3 3

3 4
1 2 3

4 5
1 5 2 2

*/
