#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

vector<vector<int>> adj;
vector<bool> visited;

void dfs(int s){
    visited[s] = true;

    for(auto w : adj[s]) if (!visited[w]){
        dfs(w);
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    int v, e;
    cin >> v >> e;

    adj.resize(v);
    visited.resize(v);

    for(int i = 0; i < e; i++){
        int a, b;
        cin >> a >> b; a--; b--;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(0);

    list<int> unconnected;

    for(int i = 1; i < v; i++){
        if (!visited[i]) unconnected.push_back(i+1);
    }

    if (unconnected.size() == 0) cout << "Connected" << endl;
    else {
        for (int vertex : unconnected) {
            cout << vertex << endl;
        }
    }

}