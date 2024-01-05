#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    double res = 0;
    while(n--){
        double q, y;
        cin >> q >> y;

        res += q*y;
    }

    cout << fixed << setprecision(3) << res << endl;
}