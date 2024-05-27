#include <bits/stdc++.h>
using namespace std;
int main()
{
    //    int t;
    //    cin>>t;
    //       while (t--)
    {
        int r, o, c;
        cin >> r >> o >> c;

        if (((20 - o) * 6 * 6) + c > r)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}