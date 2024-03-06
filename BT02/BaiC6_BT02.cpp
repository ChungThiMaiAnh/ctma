///baiC6.cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 1;
    int a[n][n];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << x << " ";
            x++;
        }
        x = i;
        cout << endl;
        x++;
    }
}


