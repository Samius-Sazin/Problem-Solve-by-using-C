#include<bits/stdc++.h>
using namespace std;

void dfs(int r, int c, vector<vector<char>>& grid){
    if(r < 0 || c < 0) return;
    if(r >= grid.size() || c >= grid[0].size()) return;
    if(grid[r][c] == 50 || grid[r][c] == 48) return;

    grid[r][c] = 50;

    dfs(r-1, c, grid);
    dfs(r+1, c, grid);
    dfs(r, c-1, grid);
    dfs(r, c+1, grid);
}

int numIslands(vector<vector<char>>& grid) {
    int cnt = 0;
    for(int r=0; r<grid.size(); r++){
        for(int c=0; c<grid[0].size(); c++){
            if(grid[r][c] == 49){
                dfs(r, c, grid);
                cnt++;
            }
        }
    }

    return cnt;     
}