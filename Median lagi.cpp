#include<bits/stdc++.h>
using namespace std;

int n,x,m,ans,idx,up1,low1,jawaban;
vector<int> arr;
std::vector<int>::iterator up,low,it;
int tambah;
int main(){
    cin >> n >> x;
    for(int i=0; i<n; i++){
        cin >> m;
        arr.push_back(m);
    }
    idx=n/2;
    sort(arr.begin(),arr.end());
    up = std::upper_bound(arr.begin(), arr.end(), x);
    low = std::lower_bound(arr.begin(), arr.end(), x);
    /*
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << ' ';
    }
    */
    up1 = (up - arr.begin());
    low1 = (low - arr.begin());

    it = std::find (arr.begin(), arr.end(), x);
    if (it != arr.end()){
        ans = it - arr.begin() + 1;
    } else {
        tambah=1;
    }
    cout << up1 << ' ' << low1 << ' ' << idx << ' ' << endl;
    if(abs(up1-idx)<abs(low1-idx)){
        ans = idx - up1;
        jawaban = up1;
        cout << "up" <<endl;
    } else {
        ans = idx - low1;
        jawaban = low1;
        cout << "low " << endl;
    }
    cout << jawaban-ans << endl;
}
