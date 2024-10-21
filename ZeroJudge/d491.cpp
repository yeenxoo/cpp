#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if(a>b) swap(a,b);
    a+=a%2;
    b-=b%2;
    cout << (a+b)*((b-a)/2+1)/2;
}
