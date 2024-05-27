#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[3], tot_a = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
            tot_a = tot_a + a[i];
        }
        int b[3], tot_b = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> b[i];
            tot_b = tot_b + b[i];
        }

        if (tot_a > tot_b)
        {
            cout << "DRAGON" << endl;
        }
        else if (tot_b > tot_a)
        {
            cout << "SLOTH" << endl;
        }
        else
        {
            if (a[0] > b[0])
            {
                cout << "DRAGON" << endl;
            }
            else if (a[0] < b[0])
            {
                cout << "SLOTH" << endl;
            }
            else
            {
                if (a[1] > b[1])
                {
                    cout << "DRAGON" << endl;
                }
                else if (a[1] < b[1])
                {
                    cout << "SLOTH" << endl;
                }
                else cout<<"TIE"<<endl;
            }
        }
    }

    return 0;
}
