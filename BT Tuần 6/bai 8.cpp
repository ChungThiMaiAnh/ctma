#include <bits/stdc++.h>

using namespace std;

void solve(int n){
    for (int i = 0; i < n; i++){
        for (int m = 0; m < (n-i-1); m++) cout << ' ';
        for (int n = 0; n < i*2+1; n++) cout << '*';
        cout << endl;
    }
}

int main(){
    solve(5);
}
