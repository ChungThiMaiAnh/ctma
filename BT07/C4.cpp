#include <bits/stdc++.h>
using namespace std;

int Strlen(char a[]){
    int res = 0;
    for (int i = 0; a[i] != '\0'; i++){
        res++;
    }
    return res;
}

void pad_left(char a[], int n){
    int length = Strlen(a);
    if (length >= n) return;
    for (int i = n - length; i < n; i++){
        a[i] = a[i - n + length];
    }
    for (int i = 0; i < n - length; i++){
        a[i] = ' ';
    }
    a[n] = '\0';
}

int main() {

    char a[] = "ABCD";
    pad_left(a, 10);
    cout << a;
}
