#include <bits/stdc++.h>

using namespace std;

int main(){ 
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;

        if (a > b) cout << ">" << endl;
        else if (a < b) cout << "<" << endl;
        else cout << "=" << endl;
    }
}