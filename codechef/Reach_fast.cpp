#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
    int x,y,k;
    cin>>x>>y>>k;
    float temp =abs(x-y)/float(k);
    cout<<ceil(temp)<<endl;
   }
   return 0;
   
}