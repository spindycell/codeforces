#include<bits/stdc++.h>
using namespace std;

struct lis {
    int id[5];
};

bool cmp(const lis& x, const lis& y){
    if(x.id[1]==y.id[1])
        return x.id[0] < y.id[0];
    else
        return x.id[1] > y.id[1];
}

int main(){
    int n;
    cin >> n;
    vector<lis> arr(n);
    for(int i=0; i<n; i++){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int sum=a+b+c+d;
        arr[i].id[0]=i,arr[i].id[1]=sum;
    }
    sort(arr.begin(),arr.end(),cmp);
    for(int i=0; i<n; i++){
        if(arr[i].id[0]==0){
            cout << i+1 << '\n';
            return 0;
        }
    }
}
