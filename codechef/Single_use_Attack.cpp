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
    float temp=x-k;
    cout<<ceil(temp/float(y))+1<<endl;;
   }
   return 0;
   
}