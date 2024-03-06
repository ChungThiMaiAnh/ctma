///bai28.cpp
#include <iostream>

using namespace std;

int main() {
    for (int h = 0; h < 24; ++h) {
        if (h == 0) {
            cout << "12 midnight" << endl;
        } else if (h >= 1 && h <= 11) {
            cout << h << "am" << endl;
        } else if (h == 12) {
            cout << "12 noon" << endl;
        } else {
            cout << h - 12 << "pm" << endl;
        }
    }

    return 0;
}

