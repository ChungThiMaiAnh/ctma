#include <bits/stdc++.h>

using namespace std;


void f(int xval)
{
   int x;
   x = xval;
   cout << "location of x: " << &x << endl;
}
void g(int yval)
{
   int y;
   cout << "location of y: " << &y << endl;
}
int main()
{
   f(7);
   g(11);
   return 0;
}
