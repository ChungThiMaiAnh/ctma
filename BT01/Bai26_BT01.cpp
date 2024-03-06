///BasicStatistics.cpp
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];
    int s = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
   for(int i = 0; i < n; i++)
    {
        s += a[i];
    }
    double tb = s/(n*1.0);
    sort(a, a + n);
    cout << "Mean: " << tb << endl << "Max: " << a[n - 1] << endl << "Min: " << a[0];
}

