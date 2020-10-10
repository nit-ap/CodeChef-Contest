#include<bits/stdc++.h>
using namespace std;
int main()
{
    
int t;
cin>>t;
while(t--)
{ int n,c=0;
    cin>>n;
    int a[n];
    set<int> s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>0)
        s.insert(a[i]);
    }
   
    cout<<s.size()<<"\n";
}
    
return 0;
}