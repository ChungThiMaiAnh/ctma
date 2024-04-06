#include <bits/stdc++.h>

using namespace std;

void arrays(int arr[]){
    cout << "arr: " << &arr[0] << endl;
}
void cString(char s[]){
    cout << "cString" << (void*)&s[0] << endl;
}

int main(){
    int arr[2] = {1, 0};
    cout << "arr location: ";
    cout << &arr[0] << endl;
    arrays(arr);

    char s[2] = {'1'};
   cout << "char location: ";
cout << (void*)&s[0] << endl;
    cString(s);

    return 0;
}
