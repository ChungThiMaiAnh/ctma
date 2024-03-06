///MaxWithoutlf.cpp
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int c = b - a;
    cout << a + abs(c);
}

