#include <bits/stdc++.h>

using namespace std;

const int N = 10;

void createRandomArray(int arr[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 50;
    }
}

void DivisibleBy25(int arr[], int n) {
    for (int i = 0; i < n - 2; i++) {
    for (int j = i + 1; j < n - 1; j++) {
    for (int k = j + 1; k < n; k++) {
        if ((arr[i] + arr[j] + arr[k]) % 25 == 0) {
            cout << "(" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")\n";
    }
    }
    }
    }
}

int main() {
    int a[N];
    createRandomArray(a, N);
    DivisibleBy25(a, N);
}
