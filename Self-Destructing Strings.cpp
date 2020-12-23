#include <bits/stdc++.h>
#include <iostream>

using namespace std;
#define ll long long


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int x=s.length();
        if(x%2==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            int z=count(s.begin(),s.end(),'0');
            if(z==(x/2))
            {
                cout<<0<<endl;
            }
            else if(z==0||z==x)
            {
                cout<<-1<<endl;
            }
            else
            {
                int f=abs((x/2)-z);
                cout<<f<<endl;
            }
        }
    }

    return 0;
}
