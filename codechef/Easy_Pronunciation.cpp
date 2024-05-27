#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n,temp=0;
        vector <int> v;
        cin>>n;
        string str;
        cin>>str;
        for (int i = 0; i < n; i++)
        {
            if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') {
            temp++;
            }
            else {
                v.push_back(temp);
                temp=0;
            }  
        }
        v.push_back(temp);
        int maxy=0;
        if (!v.empty())
        {
            maxy=*max_element(v.begin(),v.end());   
        }
        
      

        if (maxy>=4)
        {
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
       
    }
    return 0;
}