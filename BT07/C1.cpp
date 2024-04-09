#include <bits/stdc++.h>

using namespace std;

int Strlen(char a[]){
    int res = 0;
    for (int i = 0; a[i] != '\0'; i++){
        res++;
    }
    return res;
}
void reverse(char a[]) {
    int length = strlen(a);
    for (int i = 0; i < length / 2; i++) {
        char temp = a[i];
        a[i] = a[length - i - 1];
        a[length - i - 1] = temp;
    }
}

int main() {
    char str[] = "abc";
    cout << str << endl;
    reverse(str);
    cout << str << endl;

    return 0;
}
