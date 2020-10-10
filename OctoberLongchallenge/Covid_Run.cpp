#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    
ll t;
cin>>t;
while(t--)
{
    int n,k,x,y;
    bool f=false;
    cin>>n>>k>>x>>y;
    map<int,int>m;
    if(x==y)
     cout<<"YES"<<"\n";
     else
     {
            m[x]++;   
            while(m[x]!=2)
            {
                x=(x+k)%n;
                if(x==y)
                {cout<<"YES"<<"\n";
                f=true;
                break;
                }
                
                m[x]++;
                }
        if(f==false)
      cout<<"NO"<<"\n";
     }
    
}
    
return 0;
}