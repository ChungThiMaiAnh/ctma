///TriangleArea.cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b, c, ncv, s;
    cin >> a >> b >> c;
    ncv = (a + b + c)/(2*1.0);
    s = sqrt(ncv*(ncv - a)*(ncv - b)*(ncv - c));
    cout << s;
    return 0;
}

