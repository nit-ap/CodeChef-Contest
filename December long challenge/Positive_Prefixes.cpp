#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    
ll t;
cin>>t;
while(t--)
{
    ll n,k,s=0,x=0,j=1,l;
    cin>>n>>k;
    bool f=false;
    ll a[n+1];
    for(ll i=1;i<=n;i++)
    {
        a[i]=i;
    }
    if(k==0)
    {   
            for(ll i=1;i<=n;i++)
          cout<<-i<<" ";
        
           
          cout<<endl;
    }
    else
    {
          while(x<n-k)
    {  
       
      
      
       if(f==false)
        {   if(j%2==1)
            {a[j]=-a[j];
            x++;
            
            }
             if(j==n)
            {
            
                f=true;
            }
            j++;
            if(n+1==j)
            j--;
            
        }
        else
        {
            
            if(j%2==0)
             {
                 a[j]=-a[j];
                 x++;
                
             }
            
             j--;
        }
      
    }
  for(ll i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    }
    
   
}
    
return 0;
}

//Code Writer:-Amit yadav