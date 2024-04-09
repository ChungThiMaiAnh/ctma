#include <bits/stdc++.h>

using namespace std;

int count_even(int* arr, int n){
    int res = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            res++;
        }
    }
    return res;
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = &arr[0]; int n = 5;
    cout << count_even(ptr, n);
}
