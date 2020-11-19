#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    
ll t;
cin>>t;
while(t--)
{
    int n,s=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
      sort(a,a+n,greater<>());
      if(n==1)
      cout<<a[0]<<endl;
      else if(n==2)
      cout<<max(a[1],a[0])<<endl;
      else if(n==3)
      {
          cout<<min(a[0],a[1])+max(abs(a[0]-a[1]),a[2])<<endl;

      }
      else
      {
          int t;
          s+=min(a[0],a[1]);
          t=abs(a[0]-a[1]);
          if(t==0)
          {s+=max(a[2],a[3]);
          cout<<s<<endl;
          }
          else
          {
              s+=min(t,a[2]);
              t=abs(t-a[2]);
              s+=max(t,a[3]);
              cout<<s<<endl;
          }
          
      }
      
      
}
    
return 0;
}