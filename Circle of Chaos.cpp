#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    return gcd(b%a,a);
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    vector<int> arr(m);
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    int res=arr[0];
    for(int i=1;i<m;i++)
    {
        res=gcd(res,arr[i]);
        if(res==1)
        {
            break;
        }
    }
    
    int k=0;
    for(int i=res;i>=1;i--)
    {
        if(res%i==0&&i<=n)
        {
            k=n-i;
            break;
        }
    }
    cout<<k<<endl;
  }
  
}