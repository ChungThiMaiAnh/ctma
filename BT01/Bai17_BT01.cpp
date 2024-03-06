///LeapYear.cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    cin >> a;
    if(a > 0 && !(a%4)) cout << "true";
    else cout << "false";

    return 0;
}

