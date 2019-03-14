#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10],sum=0,maks=0,temp=0;
    for(int i=0; i<5; i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+5);
    int tiga = 0;
    int ok = 0;
    for(int i=0; i<5; i++){
        if(arr[i]==arr[i-1]){
            temp+=arr[i];
            tiga++;
            ok++;
        } else {
            temp = arr[i];
            tiga = 0;
        }
        if(tiga==3)break;
    }
    cout << sum << ' ' << tiga << ' ' << maks << endl;
}
