#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, i, j, a;
    cin >> n;
    vector<vector<long long>> v(n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cin >> a;
            v[i].push_back(a);
        }
    }
    for(i=n-1;i>0;i--){
        for(j=0;j<i;j++){
            v[i-1][j]+=max(v[i][j],v[i][j+1]);
        }
    }
    cout << v[0][0];
    return 0;
}
