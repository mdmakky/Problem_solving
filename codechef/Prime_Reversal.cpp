#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x = 0, y = 0;
        cin >> n;
        string s1, s2;
        cin >> s1;
        cin >> s2;

        for (int i = 0; i < n; i++)
        {
            if (s1[i] == '1')
            {
                x++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s2[i] == '1')
            {
                y++;
            }
        }
        if (x == y)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
