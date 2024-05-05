#include<bits/stdc++.h>
using namespace std;

void dfs(int r, int c, vector<vector<int>>& image, int initialColor, int newColor){
    if(r < 0 || c < 0) return;
    if(r >= image.size() || c >= image[0].size()) return;
    if(image[r][c] != initialColor) return;

    image[r][c] = newColor;

    dfs(r-1, c, image, initialColor, newColor);
    dfs(r+1, c, image, initialColor, newColor);
    dfs(r, c-1, image, initialColor, newColor);
    dfs(r, c+1, image, initialColor, newColor);
}

vector< vector<int> > floodFill(vector< vector<int> >& image, int sr, int sc, int newColor) {
    int initialColor = image[sr][sc];

    if(initialColor == newColor) return image;

    dfs(sr, sc, image, initialColor, newColor);

    return image;
}