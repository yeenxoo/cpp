#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, q, a;
    cin >> n >> q;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    while(q--){
        cin >> a;
        int left=0, right=1, diff;
        bool found=0;
        while(right<n){
            diff=v[right]-v[left];
            if(diff==a){
                found=1;
                break;
            }
            else if(diff<a) right++;
            else left++;
            if(left==right) right++;
        }
        if(found==0) cout << "NO\n";
        else cout << "YES\n";
    }
}
