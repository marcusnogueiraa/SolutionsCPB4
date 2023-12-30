#include <bits/stdc++.h>

using namespace std;

int main(){
    double X;
    cin >> X;

    int res = round(X * (1000 * ((double) 5280/4854)));
    cout << res << endl;
}