#include <iostream>

using namespace std;

string timKiem(int N, int a[]) {
    bool daThay[10001] = {false};
    for (int i = 0; i < N; i++) {
        int n = a[i];
        if (daThay[n]) {
            return "Yes";
        }
        seen[n] = true;
    }
    return "No";
}

int main() {
    int N;
    cin >> N;

    int a[10000];
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }
    cout << timKiem(N, arr) << endl;
}

