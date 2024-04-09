#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {
    const char* str1 = "hello";
    const char* str2 = "hellohellohello";

    int len = strlen(str1);
    int cnt = 0;

    const char* ptr = str2;

    for (int i = 0; i < strlen(str2) - len; i++){
        char p[len];
        strncpy(p, ptr, len);
        if (strcmp(str1, p) == 0){
            cnt++;
        }
        ptr += len;
    }
    cout << cnt;
}
