#include <iostream>
using namespace std;
int n,a,b,k,m;

int main(){
    cin>>n;
    for (int i=1; i<=n; i++){
        cin >> a;
        if(a%2==0){
            b++;
            k=i;
        } else {
            m=i;
        }
    }
    cout << (b==1? k : m);  //ketika hanya ada satu angka genap maka output posisi angka genap tersebut.
    // jika ada lebih dari 1 angka genap maka output posisi nilai ganjil
}
//top submission
/*
#include <iostream>
int n,a[2],b[2],i;
int main()
{
 std::cin>>n;
 while(a[0]*a[1]<2)
 {
  std::cin>>n;
  b[n%2]=++i;
  a[n%2]+=1-a[n%2]/2;
 }
 std::cout<<b[a[0]-1];
}
*/

/* FAIL when n is 3 the problem is decided is it index 2 or 3.
#include<bits/stdc++.h>
using namespace std;
int n,i,a,b,x,pos;
bool genap(int number){
    if(number%2==0){
        return true;
    }
    return false;
}
int main(){
    cin >> n;
    int m = n;
    while(n--){
        cin >> x;
        a = x;
        i++;
        cout << genap(a) << " " << genap(b) << " " << i <<endl;
        if(genap(a)^genap(b)){
            pos = i;
        }
        b = a;
    }
    cout << (pos==m? pos : pos-1) <<endl;
}
*/
