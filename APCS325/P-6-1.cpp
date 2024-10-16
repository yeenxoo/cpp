#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, i;
    cin >> n;
    vector<long long> score(n+1,0);
    for(i=1;i<=n;i++){
        cin >> score[i];
    }
    for(i=2;i<=n;i++){
        score[i]+=min(score[i-1],score[i-2]);
    }
    cout << score.back();
}
