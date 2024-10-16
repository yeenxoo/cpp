#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n;
    string a, b;
    unordered_map<string,string> m;
    cin >> n;
    while(n--){
        cin >> a >> b;
        m[a]=b;
    }
    while(cin>>a){
        cout << m[a] << " ";
    }
}
