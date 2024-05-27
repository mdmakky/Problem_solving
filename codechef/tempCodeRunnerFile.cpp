#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      int n;
      cin>>n;
      vector <char> v;
      string chat;
      cin>>chat;
      char massege[n];
      for (int i = 0; i < n; i++)
      {
        massege[i]=chat[i];
      }
      for (int i = 0; i < n; i++)
      {
        cout<<massege[i];
      }
      

    }
    return 0;
}
