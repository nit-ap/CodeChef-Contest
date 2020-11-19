#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    
ll t;
cin>>t;
while(t--)
{   int pl=0,pr=0;
    int n,k,c=0,cd=0,p=0,p1,mc=0,s=0;
    cin>>n>>k;
   string str;
   cin>>str;
   queue<int>m,f;
  s=k+1;
    int j=0;
   for(int i=0;i<n;i++)
   {
      if(str[i]=='M')
      { m.push(i);

      } 
       if(str[i]=='I')
        { f.push(i);
        }
     if(str[i]=='X'||i==n-1)
        {
            while(!m.empty()&&!f.empty())
            {
                 cd=0;
                 pl=min(m.front(),f.front());
                 pr=max(f.front(),m.front());
                 for(j=pl;j<=pr;j++)
                 {
                     if(str[j]==':')
                     cd++;
                 }
                 if((s-abs(pl-pr)-cd)>0)
                 {
                     c++;
                     m.pop();
                     f.pop();
                 }
                 else if( m.front()<f.front())
                 {
                     m.pop();
                 }
                 else
                 {
                     f.pop();
                 }
                 
            }
            while(!m.empty())
            m.pop();
            while(!f.empty())
            f.pop();
        }
        
        
   }
   cout<<c<<endl;
}
    
return 0;
}