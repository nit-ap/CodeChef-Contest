#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isPrime(int n)
{
   
    if (n <= 1)
        return false;
 

    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
int main()
{
    
ll t;
cin>>t;
while(t--)
{
  int n;
  
  cin>>n;
  int a[n+1],b[n+1],c[n];
  for(int i=1;i<n+1;i++)
  {
      cin>>b[i];
     

  }  
int k=1,i=2;
 while(k<n+1)
 {
   if(isPrime(i))
   {
     
     a[k++]=i;
    
   }
   i++;
 }
for(int i=1;i<n+1;i++)
{
  if(i!=b[i])
  {
    a[i]=a[b[i]];
  }
}
for(int i=1;i<n+1;i++)
  cout<<a[i]<<" ";
  cout<<endl;
  }
    
return 0;
}