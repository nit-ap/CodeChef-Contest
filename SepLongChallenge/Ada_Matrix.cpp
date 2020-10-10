#include<bits/stdc++.h>
using namespace std;
int main()
{
    
int t;
cin>>t;
while(t--)
{      int n;
     cin>>n;
    int a[n+1][n+1],b[n+1][n+1],d[n+1][n+1],e[n+1][n+1],c=0,m=1,r=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
            
                b[i][j]=m;
                m++;
               
             
        }
    }
   
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        { 
           if(a[i][j]!=b[i][j])
              {  
                  d[i][j]=1;
                  e[i][j]=1;
              }
              else
              {
                 d[i][j]=0;
                  e[i][j]=0;
              }
              
        }
    }
    
      for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=1;j--)
        { 
             if(d[i][j]==1)
             {  c++;
               for(int k=1;k<=j;k++)
               {for(int l=1;l<=j;l++)
               {   if(d[k][l]==0&&k!=l)
                    {
                      e[l][k]=1;
                    }
                    else
                    {
                        
                        e[l][k]=0;
                    }
                    
                  
               }
              
              
               }
                for(int k=1;k<=n;k++)
               {for(int l=1;l<=n;l++)
               { d[k][l]=e[k][l];
               }
               
               }
              
             }
             
        }
         
    }
          cout<<c<<"\n";
     
     
}
    
return 0;
}