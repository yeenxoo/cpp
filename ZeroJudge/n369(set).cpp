#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    unordered_set<string> mail;
    string a, b;
    cin >> n;
    while(n--){
        cin >> a >> b;
        if(mail.find(a)==mail.end()){
            cout << "welcome, " << b << "\n";
            mail.insert(a);
        }
        else cout << b << " account has been used\n";
    }
}
