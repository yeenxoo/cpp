#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    while (cin >> n >> m) {
        vector<vector<int>> a(n+1, vector<int>(n+1, 0));
        vector<vector<int>> prefix(n+1, vector<int>(n+1, 0));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> a[i][j];
                prefix[i][j] = a[i][j] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
            }
        }
        while (m--) {
            int x, y, x1, y1;
            cin >> x >> y >> x1 >> y1;
            int result = prefix[x1][y1] - prefix[x-1][y1] - prefix[x1][y-1] + prefix[x-1][y-1];
            cout << result << "\n";
        }
    }

    return 0;
}
