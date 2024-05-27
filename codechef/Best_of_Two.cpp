#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int arr[6];
        for (int i = 0; i < 6; i++)
        {
            cin >> arr[i];
        }

        int alice[3], bob[3];
        copy(arr, arr + 3, alice);
        sort(alice, alice + 3);
        copy(arr + 3, arr + 6, bob);
        sort(bob, bob + 3);
        if (alice[1] + alice[2] > bob[1] + bob[2])
        {
            cout << "Alice" << endl;
        }
        else if (alice[1] + alice[2] < bob[1] + bob[2])
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }
    return 0;
}