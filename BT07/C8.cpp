#include <bits/stdc++.h>

using namespace std;

int Strlen(char a[]){
    int res = 0;
    for (int i = 0; a[i] != '\0'; i++){
        res++;
    }
    return res;
}
void trim_right(char a[]){
    int len = Strlen(a);
    int index = len - 1;
    while (a[index] == ' '){
        index--;
    }
    a[++index] = '\0';
}

int main() {
    char a[] = "ABCDDCBA               ";
    trim_right(a);
    cout << a;
}
