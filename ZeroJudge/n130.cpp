#include <bits/stdc++.h>
using namespace std;
char ch[1005][1005];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, k=0;
    cin >> n >> m;
    string s;
    cin.ignore();
    getline(cin, s);
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> ch[i][j];
            if(ch[i][j]=='.') k++;
        }
    }
    s = string((k-s.size())/2,'.') + s + string((k-s.size())/2,'.');
    for(int i=0, l=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(ch[i][j]!='#') {
                cout << s[l];
                l++;
            }
            else cout << "#";
        }
        cout << "\n";
    }
}
