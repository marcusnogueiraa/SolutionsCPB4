#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    if (n < m && m-n == 1){
        cout << "Dr. Chaz will have " << m - n << " piece of chicken left over!" << endl;
    } else if (n < m && m-n > 1){
        cout << "Dr. Chaz will have " << m - n << " pieces of chicken left over!" << endl;
    } else if (n > m && n-m == 1) {
        cout << "Dr. Chaz needs " << n - m << " more piece of chicken!" << endl;
    } else {
        cout << "Dr. Chaz needs " << n - m << " more pieces of chicken!" << endl;
    }
}