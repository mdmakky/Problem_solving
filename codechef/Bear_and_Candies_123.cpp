#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, b, l_tot = 0, b_tot = 0;
        cin >> l >> b;
        for (int i = 1;; i++)
        {
            if (i % 2 != 0)
            {
                l_tot = l_tot + i;
                if (l_tot > l)
                {
                    cout << "Bob" << endl;
                    break;
                }
            }
            else
            {
                b_tot = b_tot + i;
                if (b_tot > b)
                {
                    cout << "Limak" << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
