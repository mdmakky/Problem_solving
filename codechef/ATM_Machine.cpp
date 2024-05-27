#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        vector <int> v;
        for (int i = 0; i < a; i++)
        {
            if (b>=arr[i])
            {
                v.push_back(1);
                b=b-arr[i];
            }
            else v.push_back(0);
            
        }

        for (int i = 0; i < a; i++)
        {
            cout<<v[i];
        }
        cout<<endl;
    }

    return 0;
}