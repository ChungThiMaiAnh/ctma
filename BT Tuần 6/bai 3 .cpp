#include <bits/stdc++.h>

using namespace std;

void pluss(int &x){
    x++;
    cout << "pass by reference: " << &x << endl;
}

void minuss(int x){
    x--;
    cout << "pass by value: " << &x<< endl;
}

int main(){
    int n = 6;
    std:cout << "n's address: " << &n << endl;
    pluss(n);
    minuss(n);

}
