#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    unordered_map<string,bool> mail;
    string a, b;
    cin >> n;
    while(n--){
        cin >> a >> b;
        if(mail[a]==0){
            cout << "welcome, " << b << "\n";
            mail[a]=true;
        }
        else cout << b << " account has been used\n";
    }
}
