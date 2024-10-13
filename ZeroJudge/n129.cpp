#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, i;
    cin >> n;
    vector<int> a(n+3);
    a[0]=1;
    a[1]=2;
    a[2]=4;
    for(i=3;i<n;i++){
        a[i]=a[i-1]+a[i-2]+a[i-3];
    }
    cout << a[n-1] << endl;

}

