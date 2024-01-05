#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){
    int x;
    cin >> x;

    for(int i = 0; i < x; i++){
        int num;
        cin >> num;

        if (num % 2 == 0) cout << num << " is even" << endl;
        else cout << num << " is odd" << endl;
    }
}