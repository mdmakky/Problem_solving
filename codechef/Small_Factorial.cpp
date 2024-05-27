#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k,fac=1;
        cin>>k;
        for (int i = 1; i <=k; i++)
        {
            fac=fac*i;
        }
        cout<<fac<<endl;
        
    }

    return 0;
}