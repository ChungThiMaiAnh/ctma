#include <bits/stdc++.h>

using namespace std;

int gcd(int x, int y){
    while (x*y){
        if (x > y) x %= y;
        else y %= x;
    }
    return (x > y) ? x : y;
}

bool relativelyPrime(int x, int y){
    if (gcd(x, y) == 1){
        return true;
    }return false;
}

int main(){
   cout << gcd(4, 6);
}
