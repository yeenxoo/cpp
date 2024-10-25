#include <bits/stdc++.h>

using namespace std;
int n, m;
vector<vector<int>> grid;
vector<vector<bool>> visited;
const int dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
const int dy[] = {0, 0, 1, -1, 1, -1, 1, -1};

bool check(int x, int y){
    return x>=0&&x<m&&y>=0&&y<n;
}
void dfs(int x,int y){
    visited[x][y]=1;
    for(int i=0;i<8;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(check(nx,ny)&&!visited[nx][ny]&&grid[nx][ny]) dfs(nx,ny);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    while(cin >> m >> n&&(n!=0||m!=0)){
        grid.assign(m,vector<int>(n));
        visited.assign(m,vector<bool>(n,0));
        for(int i=0;i<m;i++){
            string s;
            cin >> s;
            for(int j=0;j<n;j++){
                grid[i][j]=s[j]-'0';
            }
        }
        int c=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1&&!visited[i][j]){
                    dfs(i,j);
                    c++;
                }
            }
        }
        cout << c << endl;
    }
}
