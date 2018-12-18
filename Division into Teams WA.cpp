#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,sumA=-1,sumB,x,temp,maks,maksA,maksB,numA,numB,idxA,idxB;
vector<pair<ll,ll> > A,B;

int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> x;
        maks = max(maks,x);
        if(sumA>sumB && abs(A.size()-B.size())<=1){
            if(abs(sumA-sumB)>=maks){
                if(A.size()>=B.size()){
                    B.push_back(make_pair(maksA,idxA));
                    if(A.size()>=1)A.erase(A.begin()+idxA);
                    A.push_back(make_pair(x,i));
                    sumA+=x;
                    if(x>=maksA)idxA=i;
                    maksA = max(maksA,x);
                    sumB+=maksA;
                    if(maksA>=maksB)idxB=idxA;
                    maksB = max(maksA,maksB);

                } else {
                    A.push_back(make_pair(maksB,idxB));
                    if(B.size()>=1)B.erase(B.begin()+idxB);
                    B.push_back(make_pair(x,i));
                    sumB+=x;
                    if(x>=maksB)idxB=i;
                    maksB = max(maksB,x);
                    sumA+=maksB;
                    if(maksB>=maksA)idxA=idxB;
                    maksA = max(maksA,maksB);
                }
            } else {
                B.push_back(make_pair(x,i) );
                sumB+=x;
                if(x>=maksB)idxB=i;
                maksB = max(maksB,x);
            }
        } else{
            if(abs(sumA-sumB)>=maks){
                if(A.size()>=B.size()){
                    B.push_back(make_pair(maksA,idxA));
                    if(A.size()>=1)A.erase(A.begin()+idxA);
                    A.push_back(make_pair(x,i));
                    sumA+=x;
                    if(x>=maksA)idxA=i;
                    maksA = max(maksA,x);
                    sumB+=maksA;
                    if(maksA>=maksB)idxB=idxA;
                    maksB = max(maksA,maksB);
                } else {
                    A.push_back(make_pair(maksB,idxB));
                    if(B.size()>=1)B.erase(B.begin()+idxB);
                    B.push_back(make_pair(x,i));
                    sumB+=x;
                    if(x>=maksB)idxB=i;
                    maksB = max(maksB,x);
                    sumA+=maksB;
                    if(maksB>=maksA)idxA=idxB;
                    maksA = max(maksA,maksB);
                }
            } else {
                A.push_back(make_pair(x,i) );
                sumA+=x;
                if(x>=maksA)idxA=i;
                maksA = max(maksA,x);
            }
        }
    }
    numA=A.size();
    numB=B.size();
    for(int i=0; i<A.size(); i++){
        if(A[i].second==0)numA--;
    }
    for(int i=0; i<B.size(); i++){
        if(B[i].second==0)numB--;
    }

    cout << numA <<endl;
    for(int i=0; i<A.size(); i++){
        if(A[i].second!=0)cout << A[i].second <<' ';
    }
    cout << endl << numB <<endl;
    for(int i=0; i<B.size(); i++){
        if(B[i].second!=0)cout << B[i].second << ' ';
    }
    cout <<endl;
}
