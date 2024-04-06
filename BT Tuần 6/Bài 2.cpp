#include <bits/stdc++.h>

using namespace std;

long long factorial(long long x){
    if (x == 1){
        return x;
    }
   cout << "x = " << x << " at " << &x << endl;
    return x * factorial(x - 1);

}

int main(){
    cout << factorial(7);
    return 0;
}
