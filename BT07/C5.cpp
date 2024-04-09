#include <bits/stdc++.h>
using namespace std;

int Strlen(char a[]){
    int res = 0;
    for (int i = 0; a[i] != '\0'; i++){
        res++;
    }
    return res;
}

void truncate(char a[], int n){
    int len = Strlen(a);
    if (len <= n) return;
    a[n] = '\0';
}

int main() {
    char a[] = "ABCD";
    truncate(a, 2);
    cout << a;
}
