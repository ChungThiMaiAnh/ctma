///baiC4.cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    int t = 2*n + 1;
    string o = "";
    char k = ' ';
    for(int i = 0; i < t; i++)
    {
        o += "*";
    }
    for(int i = 0; i < t; i++)
    {
        o[t-i-1] = k;
        o[i] = k;
        cout << o << endl;
    }
}

