#include<bits/stdc++.h>
using namespace std;
int n,i,x,m,jum;
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x, m=(x>m?x:m), jum+=x;
    }
    //cout << jum << " "<< x <<endl;
    cout << m*n-jum;
}
/*
    int n;
    long long arr[105];
    //vector<long long> arr;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    long long temp;
    temp = *std::max_element(arr,arr+n);
    long long ans=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=temp){
            ans+= temp-arr[i];
        }
    }
    cout << ans <<endl;
*/
