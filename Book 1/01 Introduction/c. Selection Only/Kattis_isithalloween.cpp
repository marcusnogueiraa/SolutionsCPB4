#include <bits/stdc++.h>

using namespace std;

int main(){
    string m, d;
    cin >> m >> d;

    if ((m == "OCT" && d == "31") || (m == "DEC" && d == "25")) cout << "yup" << endl;
    else cout << "nope" << endl;
}