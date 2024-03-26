#include <bits/stdc++.h>

using namespace std;

char a3[5] = "abcd";

int main()
{
    char b3[5] = "abcd";

    cout << a3 << endl;
    for(int i=0; i<5; i++)
    {
        cout << a3[i] << " ";
        if(a3[i] == '\0') cout << "0" << endl;
    }
}
