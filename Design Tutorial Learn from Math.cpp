// http://codeforces.com/problemset/problem/472/A
#include<bits/stdc++.h>
using namespace std;
int n;
bool isPrime(int number){
    if(number < 2) return false;
    if(number== 2) return true;
    if(number== 3) return true;
    if(number== 5) return true;
    if(!(number%2))return false;
    if(!(number%3))return false;
    if(!(number%5))return false;
    if(number<7*7) return true;

    int step[] = {7,11,13,17,19,23,29,31};
    int sentry = (int)sqrt((double)number);

    for(int i=0; i<sentry; i+=30){
        for(int j=0; j<8; ++j){
            if(!(number%(i+step[j])))
                return false;
        }
    }
    return true;
}
int main(){
    cin >> n;
    int a = n/2;
    int b = n-a;
    while(isPrime(a) || isPrime(b)){
        a--;
        b++;
    }
    cout << a << " " << b <<endl;
}

// best way... just look at the composite number
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2==0) cout<<"4 "<<n-4; else cout<<"9 "<<n-9;

    return 0;
}
*/
