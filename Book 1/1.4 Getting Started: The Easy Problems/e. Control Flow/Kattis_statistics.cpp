#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t = 1;
    
    while(cin >> n){
        int num, minN = INT_MAX, maxN = INT_MIN;
        for(int i = 0; i < n; i++){
            cin >> num;
            if (num > maxN) maxN = num;
            if (num < minN) minN = num;
        }
        cout << "Case " << t << ": " << minN << " " << maxN << " " << maxN - minN << endl;
        t++; 
    }
}