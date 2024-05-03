#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector <int> g[N];

bool visitedArr[N];


void dfs(int vertex){
    if(visitedArr[vertex]) return;
    visitedArr[vertex] = true;

    for(int child: g[vertex]){
        dfs(child);
    }
}

int main(){
    int n, e;
    cin >> n >> e;

    while(e--){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(visitedArr[i]) continue;
        dfs(i);
        cnt++;
    }

    cout << cnt << endl;
}