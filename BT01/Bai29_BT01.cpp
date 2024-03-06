#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string k = "";
    string c ="*";
    for(int i = 0; i < n; i++)
    {
        k += c;
        cout << k << endl;
    }

    return 0;
}

