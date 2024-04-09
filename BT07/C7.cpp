#include <bits/stdc++.h>

using namespace std;

int Strlen(char a[]){
    int res = 0;
    for (int i = 0; a[i] != '\0'; i++){
        res++;
    }
    return res;
}
void trim_left(char a[]){
    int len = Strlen(a);
    int distance = 0;
    while (a[distance] == ' '){
        distance++;
    }
    for (int i = 0; i < len - distance; i++){
        a[i] = a[i + distance];
    }
    a[len - distance] = '\0';
}

int main() {
    char a[] = "         ABCDDCBA";
    trim_left(a);
    cout << a;
}
