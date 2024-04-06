#include <bits/stdc++.h>

using namespace std;


int main(){
    int n = 5; int nn = 6;
    cout << "location of n: " << &n << endl;
    int& s = n;
    cout << "location of s: " << &s << endl;

    s = nn;
   cout << "location of s: " << &s << endl;
cout << "location of nn: " << &nn << endl;
}
