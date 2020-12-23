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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x=count(s.begin(),s.end(),'1');
        x+=(120-n);
        if(x>=90)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
