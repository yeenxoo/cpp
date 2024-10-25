#include <bits/stdc++.h>

using namespace std;
bool isprime(int x){
    if(x<2) return false;
    if(x<4) return true;
    if(x%2==0||x%3==0) return false;

    for(int i=5,t=sqrt(x);i<=t;i+=6){
        if(x%i==0||x%(i+2)==0) return false;
    }

    return true;
}
int main(){
    int a, b, k=0;
    while(cin >> a >> b){
        k=0;
        for(int i=a;i<=b;i++){
            if(isprime(i)) k++;
        }
        cout << k << "\n";
    }
}
