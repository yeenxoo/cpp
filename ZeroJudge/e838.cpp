#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, i, j;
    cin >> n;
    string s, bomb(n,'*');
    vector <bool> col(n,0), row(n,0);
    cin.ignore();
    for(i=0;i<n;i++){
        getline(cin,s);
        if(s.find('*')!=string::npos){
            row[i]=1;
            for(j=0;j<n;j++){
                if(s[j]=='*') col[j]=1;
            }
        }
    }
    for(i=0;i<n;i++){
        if(row[i]==1) cout << bomb;
        else{
            for(j=0;j<n;j++){
                if(col[j]==1) cout << '*';
                else cout << '0';
            }
        }
        cout << "\n";
    }
}
