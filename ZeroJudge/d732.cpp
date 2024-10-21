#include <bits/stdc++.h>

using namespace std;

vector <long long> a;
long long n, i, t, k;

long long check(int left, int right) {
    while (left <= right) {
        long long m = left + (right - left) / 2;
        if (a[m] == k) return m;
        if (a[m] > k) right = m - 1;
        else left = m + 1;
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> t;
    a.resize(n);
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    stringstream ss;
    while(t--){
        cin >> k;
        ss << check(0, n-1) + 1 << "\n";
    }
    cout << ss.str();
}
