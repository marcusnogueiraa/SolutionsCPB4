#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    
    int res = 0;    
    for(int i = 0; i < n; i++){
        int num; cin >> num;
        if (num < 0) res++;
    }

    cout << res << endl;
}