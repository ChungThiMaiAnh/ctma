#include <bits/stdc++.h>

using namespace std;

int Strlen(char a[]){
    int res = 0;
    for (int i = 0; a[i] != '\0'; i++){
        res++;
    }
    return res;
}

bool is_palindrome(char a[]){
    int len = Strlen(a);
    for (int i = 0; i < len / 2; i++){
        if (a[i] != a[len - i -1]){
            return false;
        }
    }
    return true;
}

int main() {
    char a[] = "ABCDDCBA";
    cout << is_palindrome(a);
}
