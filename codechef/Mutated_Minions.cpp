#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, flag;
        cin >> a >> b;
        int minnion[a];
        for (int i = 0; i < a; i++)
        {
            cin >> minnion[i];
        }
        for (int i = 0; i < a; i++)
        {
            minnion[i] = minnion[i] + b;
            if (minnion[i] % 7 == 0)
            {
                flag++;
            }
        }
        cout << flag << endl;
    }

    return 0;
}