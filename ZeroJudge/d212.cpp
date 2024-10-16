#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, i;
    while(cin >> n){
        vector<long long> dp(n+1);
        dp[1]=1;
        dp[2]=2;
        for(i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        cout << dp.back() << "\n";
    }
}
