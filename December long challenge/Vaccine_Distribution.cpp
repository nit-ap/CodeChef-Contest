#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    
ll t;
cin>>t;
while(t--)
{
    ll n,d,x=0,r,t=0;
    cin>>n>>d;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>9&&a[i]<80)
        x++;

    }
    r=n-x;
    if(x%d==0)
    {
        t+=x/d;
    }
    else
    {
       t+=x/d+1;
    }
    if(r%d==0)
    {
        t+=r/d;
    }
    else
    {
       t+=r/d+1;
    }
    cout<<t<<endl;
}
    
return 0;
}

//Code Writer:-Amit yadav