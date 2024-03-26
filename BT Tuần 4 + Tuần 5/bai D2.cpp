#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> numbers(N);
    for (int i = 0; i < N; ++i) {
        cout << "Phần tử thứ " << i + 1 << ": ";
        cin >> numbers[i];
    }

    int min_element = numeric_limits<int>::max();
    int max_element = numeric_limits<int>::min();

    int sumEven = 0;
    int countOdd = 0;

    for (int num : numbers) {
        if (num < min_element) {
            min_element = num;
        }
        if (num > max_element) {
            max_element = num;
        }
        if (num % 2 == 0) {
            sumEven += num;
        } else {
            countOdd++;
        }
    }
    cout << "Phần tử nhỏ nhất: " << min_element << endl;
    cout << "Phần tử lớn nhất: " << max_element << endl;
    cout << "Tổng các phần tử chẵn: " << sumEven << endl;
    cout << "Số lượng các phần tử lẻ: " << countOdd << endl;
}

