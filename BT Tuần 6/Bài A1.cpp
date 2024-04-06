#include <bits/stdc++.h>

using namespace std;

long long factorial(long long x){
    if (x == 1){
        return x;
    }
    std::cout << "x = " << x << " at " << &x << std::endl;
    return x * factorial(x - 1);

}

int main(){
    std::cout << factorial(7);
    return 0;
}
