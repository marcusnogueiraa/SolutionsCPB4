#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

const int MAXS = 110;

int m, n;
char mat[MAXS][MAXS];
int di[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dj[] = {1, -1, 0, 0, 1, -1, -1, 1};

bool isvalid(int i, int j){
    return i >= 0 && i < m && j >= 0 && j < n && mat[i][j] == '@';
}

void dfs(int i, int j){
    mat[i][j] = '*';
    for(int k = 0; k < 8; k++){
        int ni = i + di[k];
        int nj = j + dj[k];

        if (isvalid(ni, nj)) dfs(ni, nj);
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    while(cin >> m >> n){
        if (m == 0 && n == 0) return 0;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }


        int res = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if (mat[i][j] == '@') {
                    res++;
                    dfs(i, j);
                }
            }
        }

        cout << res << endl;
    }
}