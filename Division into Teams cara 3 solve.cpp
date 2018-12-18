#include<bits/stdc++.h>
using namespace std;

int n,x,sumA,sumB;
vector<pair<int,int> > arr,A,B;

int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> x;
        arr.push_back(make_pair(x,i));
    }

    sort(arr.begin(),arr.end());
    int k=n-1;

    for(int i=0; i<n/2; i++,--k){
        if(i%2==0){
            A.push_back(make_pair(arr[i].first,arr[i].second));
            B.push_back(make_pair(arr[k].first,arr[k].second));
            sumA+=arr[i].first;
            sumB+=arr[k].first;
        } else {
            B.push_back(make_pair(arr[i].first,arr[i].second));
            A.push_back(make_pair(arr[k].first,arr[k].second));
            sumA+=arr[k].first;
            sumB+=arr[i].first;
        }
    }
    if(n%2!=0){
        if(sumA>sumB)B.push_back(make_pair(arr[n/2].first,arr[n/2].second));
        else A.push_back(make_pair(arr[n/2].first,arr[n/2].second));
    }
    //cout << sumA << ' ' << sumB <<endl;
    cout << A.size() <<endl;
    for(int i=0; i<A.size(); i++){
        cout << A[i].second << ' ';
    }
    cout << endl << B.size() <<endl;
    for(int i=0; i<B.size(); i++){
        cout << B[i].second << ' ';
    }
    cout << endl;
}
