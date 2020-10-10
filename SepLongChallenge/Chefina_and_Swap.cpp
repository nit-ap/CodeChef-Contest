 #include <bits/stdc++.h>
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    
 long long int t;
 cin>>t;
 long long int n;
 long long int x;
 while(t--)
 {
cin>>n;

if(n==3)
    cout<<"2"<<endl;
else{
     x=(n*(n+1))/2;
     if(x%2!=0)
     {

      cout<<"0"<<endl;
      }
     else{
   double b=(2*n+1);
     double b2=b*b;
    double c=8*(x/2);
     double out=(b-sqrt(b2-c))/2;
 
 long long  int check=int(out);

   if((out-check)!=0){
     cout<<( int(out)+1)<<endl;
     }
     else
     {
          long long int c=(n-check-1);
       long long int sum=(c*(c+1))/2;

long long int c2=(check*(check-1))/2;
        sum=sum+check+c2;  

      cout<<sum<<endl;

     }
     }
  }
 }
}
