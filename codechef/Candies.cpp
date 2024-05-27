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
        int arr[n * 2];
        for (int i = 0; i < n * 2; i++)
        {
            cin >> arr[i];
        }
        //   int current = arr[0];
        sort(arr, arr + (2 * n));
        int max = 1;
        for (int i = 0; i < n * 2; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                max++;
                if (max >= 3)
                {
                    break;
                }
                        }

            else
                max = 1;
        }
        if (max >= 3)
        {
            cout << "No" << endl;
        }
        else
            cout << "Yes" << endl;
    }
    return 0;
}
