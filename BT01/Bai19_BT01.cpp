///Ordered.cpp
#include <bits/stdc++.h>

using namespace std;

bool Ordered (int a, int b, int c)
{
    if(a >= b){
        if(b >= c) return true;
        else return false;
    }
    else {
        if( b <= c) return true;
        else return false;
    }
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
   cout << b;
    return 0;
}

