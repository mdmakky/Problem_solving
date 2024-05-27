#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
      while (t--)
      {
        int k;
        cin>>k;
        if (k<2)
        {
         cout<<k-1<<endl;
        }
        else{
         cout<<(k-2)/7+1<<endl;
        }
        
        
      }
      
    return 0;
}