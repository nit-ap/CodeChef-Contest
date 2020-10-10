#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll p(ll a)
{
   return a!=0&&((a&(a-1))==0);
}
int main()
{
    
ll t;
cin>>t;
while(t--)
{
   ll n,m=0,l,x;
   cin>>n;
  if(n==1)
  {
     cout<<1<<endl;
  continue;
  }
  else if(n==3)
  {
     cout<<1<<" "<<3<<" "<<2<<endl;
  continue;
  }
  else if(n==5)
  {
     cout<<2<<" "<<3<<" "<<1<<" "<<5<<" "<<4<<endl;
  continue;
  }
  else if(p(n))
  {
 cout<<-1<<"\n";
 continue;
  }
  else
  {
     cout<<2<<" "<<3<<" "<<1<<" "<<5<<" "<<4<<endl;
     ll i=6;
     while(i<=n)
     {
        if(p(i))
        {
           cout<<i+1<<" "<<i<<" ";
           i+=2;
        }
        else
        {
           cout<<i<<" ";
           i++;
        }
        
     }
     cout<<endl;
  }
  
    
}
    
return 0;
}