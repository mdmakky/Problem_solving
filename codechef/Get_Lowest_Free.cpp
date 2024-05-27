#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> x[i];
        }
        sort(x, x + 3);
        cout << x[1] + x[2] << endl;
    }
}