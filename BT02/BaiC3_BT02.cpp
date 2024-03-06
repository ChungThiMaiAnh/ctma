///baiC3.cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    int t = 2*n + 1;
    string o = "";
    char k = '*';
    for(int i = 0; i < t; i++)
    {
        o += " ";
    }
    for(int i = 0; i < t; i++)
    {
        o[n-1-i] = k;
        o[n-1+i] = k;
        cout << o << endl;
    }
}

