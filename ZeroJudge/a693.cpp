#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, m;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    while (cin >> n >> m) {
        vector<long long> food(n+1, 0);
        for (int i=1;i<=n;i++) {
            cin >> food[i];
            food[i] += food[i-1];
        }
        while (m--) {
            int l, r;
            cin >> l >> r;
            cout << food[r] - food[l-1] << "\n";
        }
    }

    return 0;
}
