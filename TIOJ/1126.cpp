#include <bits/stdc++.h>

using namespace std;

int check(string s, int l, int r){
    while(l>=0&&r<s.size()&&s[l]==s[r]){
        l--;
        r++;
    }
    return r-l-1;
}
int main(){
    string s;
    while(cin >> s){
        int n=1, i, t, len;
        for(i=0,t=s.size();i<t;i++){
            n=max(n,check(s,i,i));
            n=max(n,check(s,i,i+1));
        }
        cout << n << "\n";
    }

}
