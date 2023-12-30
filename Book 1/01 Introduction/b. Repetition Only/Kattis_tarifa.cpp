#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int x, n;
    cin >> x >> n;

    int Pi, tot = x;
    for(int i = 0; i < n; i++){
        cin >> Pi;
        tot -= Pi;
        tot += x;
    }

    cout << tot << endl;
}