#include <math.h>
#include <iostream>
using namespace std;
void maxtilli(int a[], int n)
{
    int mx = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
        cout << mx << " ";
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    maxtilli(a, 5);
    return 0;
}

