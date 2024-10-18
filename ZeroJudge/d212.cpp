#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n, i;
    vector<long long> dp(100);
    dp[0]=1;dp[1]=1;
    for(i=2;i<100;i++) dp[i]=dp[i-1]+dp[i-2];
    while(cin >> n) cout << dp[n] << "\n";
}
