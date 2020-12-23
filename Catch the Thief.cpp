
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin>>t;
  while(t--)
  {
    int x,y,n,k;
    cin>>x>>y>>k>>n;
    if(abs(x-y)%(2*k)==0)
    {
      cout<<"Yes"<<endl;
    }
    else
    {
      cout<<"No"<<endl;
    }
  }
  
}
