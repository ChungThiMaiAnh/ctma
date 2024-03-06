///baiA2.cpp
#include <iostream>

using namespace std;

int main() {
    int k;
    cin >> k;

    do {
        k /= 3;
    } while (k >= 3);

    cout << k << endl;
}

