#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, t, k, i;
    cin >> n >> t;
    vector <long long> a(n);
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    stringstream ss;
    while(t--){
        cin >> k;
        auto it = lower_bound(a.begin(),a.end(),k);
        if(*(it)==k) ss << distance(a.begin(),it)+1 << "\n";
        else ss << "0\n";
    }
    cout << ss.str();
}
