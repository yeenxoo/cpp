#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, pos, maxR=0;
    map<int, int> m;
    cin >> n;
    vector<int> next;
    for(int i=0;i<n;i++){
        cin >> pos;
        next[n]=pos;
    }
    for(i=0;i<n;i++){
        cin >> pos;
        m[next[i]]=pos;
    }
    for(auto it=m.begin();it!=m.end();++it){
        if(it==m.begin()){
            maxR=it->first+it->second;
            continue;
        }
        if(it->first<=k) maxR=max(maxR,it->first+it->second);
    }
    cout << maxR;
}
