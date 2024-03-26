#include <iostream>
#include <iomanip>

using namespace std;

int pas(int row, int col) {
    if (col == 0 || col == row) {
        return 1;
    } else {
        return pas(row - 1, col - 1) + pas(row - 1, col);
    }
}
void in(int n) {
    for (int row = 0; row < n; ++row) {
        cout << setw((n - row - 1) * 3);
        for (int col = 0; col <= row; ++col) {
            cout << setw(3) << pas(row, col) << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    cout << "Tam giác Pascal bậc " << n << ":" << endl;
    in(n);
}
