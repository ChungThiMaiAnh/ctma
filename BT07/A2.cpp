#include <bits/stdc++.h>

using namespace std;

void f(int arr[]){
    cout << sizeof(arr) << endl;
}

int main(){

    int arr1[] = {1, 2, 3, 4, 5, 7, 8, 9};
    int arr2[5] = {1, 2, 3, 4, 5};

    cout << "size of arr1: " << sizeof(arr1) << endl;
    f(arr1);

    cout << "size of arr2: " << sizeof(arr2) << endl;
    f(arr2);

    return 0;
}
