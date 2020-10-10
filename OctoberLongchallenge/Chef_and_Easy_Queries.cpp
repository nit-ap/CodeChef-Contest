#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    
ll t;
cin>>t;
while(t--)
{
  ll n,k,c=1,x,y=0;
   cin>>n>>k;
   ll a[n];
   bool f =false;
   for (int i = 0; i <n; i++)
   {
        cin>>a[i];
        
   }
   
        for (int i = 0; i <n; i++)
   {
       y+=a[i];
       if(y<k)
       {
       cout<<c<<"\n";
       f=true;
       break;
       }
       else
       {
         
          if(i==n-1)
          c+=y/k;
          else
          {
              c++;
          }
          
          y-=k;
         
       }
       
   }
   
  if(f==false)
   cout<<c<<"\n";   
  
    
}
    
return 0;
}