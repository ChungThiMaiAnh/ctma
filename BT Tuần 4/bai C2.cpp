#include <iostream>
#include <string>

using namespace std;

bool dxung(const string& s) {
    int i = 0;
    int j = s.length() - 1;

    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    string s;
    getline(cin, s);

    if (dxung(s)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

