#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    while(cin >> n&&!cin.eof()){
        if (n == 0) {
            cout << "0\n";
            continue;
        }
        string s;
        while(n > 0){
            s += (n%2) ? "1" : "0";
            n /= 2;
        }
        reverse(s.begin(),s.end());
        cout << s << "\n";
    }

    return 0;
}
