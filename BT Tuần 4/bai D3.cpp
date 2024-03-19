#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    int count[10] = {0};

    for (int i = 0; i < N; ++i) {
        int num;
        cout << "Phần tử thứ " << i + 1 << ": ";
        cin >> num;

        if (num >= 0 && num <= 9) {
            count[num]++;
        } else {
            cout << "Số không hợp lệ! Vui lòng nhập lại." << endl;
            i--;
        }
    }
    for (int i = 0; i < 10; ++i) {
        cout << "Số " << i << ": " << count[i] << endl;
    }
}

