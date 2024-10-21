#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    int i, j;
    for(i=0,j=s.size()-1;i<=j;i++,j--){
        if(s[i]!=s[j]){
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
}
