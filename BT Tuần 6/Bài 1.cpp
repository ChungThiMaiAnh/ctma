#include <bits/stdc++.h>

using namespace std;


int main(){
    int a[5];
    for (int i = 0; i < 3; i++){
        cout << &(a[i]) << ' ';
    }
    // cach nhau 4 byte
    cout << endl;
    char b[5] = {'1', '2', '3', '4'};
    for (int i = 0; i < 3; i++){
       cout << (void*)&(b[i]) << ' ';
    }

}
