///bai30.cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string k = "";
    string c ="*";
    for(int i = 0; i <= n; i++)
    {
        k += c;
    }
    for(int i = 0; i < n; i++)
    {
        k.pop_back();
        cout << k << endl;
    }

    return 0;
}


