#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,x,ans=0;
    deque<int> arr;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> x;
        arr.push_back(x);
    }
    while(arr.front()<=k || arr.back()<=k){
        if(arr.front()<=k)
            arr.pop_front();
        else if(arr.back()<=k)
            arr.pop_back();
        if(arr.size()==0)
            break;
    }
    cout << n-arr.size() <<endl;
}
