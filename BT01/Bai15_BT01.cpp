///FibonacciWord.cpp
#include <bits/stdc++.h>

using namespace std;

string fibonacci(int n) {
    if (n == 0) return "a";
    if (n == 1) return "b";

    string fib[n + 1];
    fib[0] = "a";
    fib[1] = "b";

    for (int i = 2; i <= n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[n];
}

int main() {
    for (int i = 0; i <= 10; ++i) {
        cout << fibonacci(i) << endl;
    }
 return 0;
}

