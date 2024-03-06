///baiC2.cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string o = "";
    char oo = ' ';
    string k = "*";
    for(int i = 0; i <= n; i++)
    {
        o += k;
    }
    for(int i = 0; i < n; i++)
    {
        o[i] = oo;
        cout << o << endl;
    }

}

