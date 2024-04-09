#include <bits/stdc++.h>

using namespace std;

int Strlen(char a[]){
    int res = 0;
    for (int i = 0; a[i] != '\0'; i++){
        res++;
    }
    return res;
}

void delete_char(char a[], char c){
    int len = Strlen(a);
    int j = 0;
    for (int i = 0; i < len; i++){
        if (a[i] != c){
            a[j++] = a[i];
        }
    }
    a[j] = '\0';
}

int main() {

    char str[] = "abaacbcbcbabaabaab";
    delete_char(str, 'a');
    cout << str;

    return 0;
}
