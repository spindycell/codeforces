#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,sumA=-1,sumB,x,tempA,tempB,maks,numA,numB;
vector<pair<ll,ll> > A,B;

int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> x;
        maks = max(maks,x);
        if(sumA>=sumB && abs(A.size()-B.size())<=1 ){
            B.push_back(make_pair(x,i));
            sumB+=x;
        }else {
            A.push_back(make_pair(x,i));
            sumA+=x;
        }
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    while(abs(A.size()-B.size())>1 ){
        if(A.size()>B.size()){
            sumB+=A[0].first;
            B.push_back(make_pair(A[0].first,A[0].second));
            sumA-=A[0].first;
            A.erase(A.begin());
        } else {
            sumA+=B[0].first;
            A.push_back(make_pair(B[0].first,B[0].second));
            sumB-=B[0].first;
            B.erase(B.begin());
        }
    }
    cout << sumA << " " <<sumB <<endl;
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    while(abs(sumA-sumB)>maks ){
        if(sumA>sumB){
            numA = A[A.size()-1].first,tempA=A[A.size()-1].second;
            numB = B[0].first,tempB=B[0].second;
            A.erase(A.end());
            B.erase(B.begin());
            A.push_back(make_pair(numA,tempA));
            B.push_back(make_pair(numB,tempB));
            sumA-=numA;
            sumB+=numB;
        } else {
            numB = B[B.size()-1].first,tempB=B[B.size()-1].second;
            numA = A[0].first,tempA=A[0].second;
            B.erase(B.end());
            A.erase(A.begin());
            A.push_back(make_pair(numA,tempA));
            B.push_back(make_pair(numB,tempB));
            sumB-=numB;
            sumA+=numA;
        }
    }
    sumA=0,sumB=0;
    cout << A.size() <<endl;
    for(int i=0; i<A.size(); i++){
        sumA+=A[i].first;
        cout << A[i].first << ' ';
    }
    cout << endl<<B.size() <<endl;
    for(int i=0; i<B.size(); i++){
        sumB+=B[i].first;
        cout << B[i].first << ' ';
    }
    cout <<endl;
    cout << sumA << ' ' << sumB <<endl;
}
