#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int x, y, z;
        cin >> x >> y >> z;
        float k = (z / 30 + x);
        cout << ceil(k / y) << endl;
    }

    return 0;
}