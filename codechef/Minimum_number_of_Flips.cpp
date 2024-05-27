#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];
            // sum = abs(sum);
        }

        if (n % 2 == 0 && sum>=0)
        {
            if (sum == 0)
            {
                cout << 0 << endl;
            }
            else
                cout << sum / 2 << endl;
        }
        else if (n % 2 == 0 && sum<0)
        {
            sum = abs(sum);
            cout<<sum/2<<endl;
        }
        
        else
            cout << -1 << endl;
    }
    return 0;
}