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
    int temp=log2(x);
    cout<<(temp-1)*k+temp*y<<endl;
   }
   return 0;
   
}