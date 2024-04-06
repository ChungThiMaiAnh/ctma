#include <bits/stdc++.h>

using namespace std;

int getRandomNumber(int x){
    return rand() % x;
}

int main(){
    srand(time(nullptr));
    int n = getRandomNumber(5);
    cout << n;
}
