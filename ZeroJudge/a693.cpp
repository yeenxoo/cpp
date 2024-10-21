#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, m;
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
