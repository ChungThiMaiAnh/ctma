#include<bits/stdc++.h>

using namespace std;

int findBinary(int *a,int n,int x)
{
    int left=0,right=n-1;
    int mid=0;
    while(left<=right)
    { mid=(left+right)/2;
    if(a[mid]==x)
        return mid;
    else if(a[mid]<x)
        left=mid+1;
    else right=mid-1;

}
return 0;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int x = 5;
    cout << findBinary(a,n,x);

}
