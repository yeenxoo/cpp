#include <bits/stdc++.h>

using namespace std;
;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, i, j;
    while(cin >> n){
        vector<vector<int>> grid(n,vector<int>(n));
        vector<vector<int>> dp(n,vector<int>(n));
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin >> grid[i][j];
            }
        }
        dp[0][0]=grid[0][0];
        for(i=1;i<n;i++){
            dp[0][i]=grid[0][i]+dp[0][i-1];
            dp[i][0]=grid[i][0]+dp[i-1][0];

        }
        for(i=1;i<n;i++){
            for(j=1;j<n;j++){
                dp[i][j]=max(dp[i-1][j],dp[i][j-1])+grid[i][j];
            }
        }
        cout << dp[n-1][n-1] << "\n";
    }
}
