#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<char> v;
        string chat;
        cin >> chat;
        char massege[n];
        for (int i = 0; i < n; i++)
        {
            massege[i] = chat[i];
        }

        for (int i = 0; i < n - 1; i = i + 2)
        {
            swap(massege[i], massege[i + 1]);
        }
        for (int i = 0; i < n; i++)
        {
            v.push_back('z' - (massege[i] - 'a'));
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i];
        }
        cout << endl;
    }
    return 0;
}
