#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++){
        string line;
        cin >> line;
        if (line == "P=NP") cout << "skipped\n";
        else {
            int pos = line.find("+");;
            int v1 = stoi(line.substr(0, pos));
            int v2 = stoi(line.substr(pos+1));
            cout << v1+v2 << endl;
        }
    }
}