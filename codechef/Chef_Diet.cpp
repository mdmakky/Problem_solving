#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, current=0,temp=0;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            current= current+arr[i];
            if (current<k)
            {
                cout<<"NO "<<i+1<<endl;
                temp=-1;
                break;
            }
            current=current-k;
            
        }
        if (temp==0)
        {
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}
