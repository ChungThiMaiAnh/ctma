#include <bits/stdc++.h>

using namespace std;

string DemicalToBinary(int x){
    string res = "";
    bool start = false;
    for (int i = 31; i >= 0; i--){
        if ((1 << i) & x){
            res += '1';
            start = true;
        }
        else if (!start){
            continue;
        }else res += '0';
    }
    return res;
}

long long BinaryToDemical(string binary) {
    long long res = 0;
    int n = binary.length();
    for (int i = n - 1; i >= 0; i--) {
        int digit = (int)(binary[i] - '0');
        res += digit * pow(2, n - 1 - i);
    }
    return res;
}

int main() {

    cout << BinaryToDemical("1101");
}
