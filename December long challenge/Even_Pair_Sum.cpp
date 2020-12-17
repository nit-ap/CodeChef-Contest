#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    
ll t;
cin>>t;
while(t--)
{
   ll a,b,x1,y1,x2,y2;
   cin>>a>>b;
    if(a%2==0)
    {
        x1=a/2;
        y1=a/2;
    }
    else
    {
         x1=a/2;
        y1=a/2+1;
    }
    if(b%2==0)
    {
        x2=b/2;
        y2=b/2;
    }
    else
    {
         x2=b/2;
        y2=b/2+1;
    }
    cout<<(x1*x2)+(y1*y2)<<endl;
}
    
return 0;
}

//Code Writer:-Amit yadav