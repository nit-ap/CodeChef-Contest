#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    
ll t;
cin>>t;
while(t--)
{
    int n,x,p,k;
    cin>>n>>x>>p>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[p-1]==x)
    cout<<0<<"\n";
    else if(k>=p&&a[p-1]>=x)
    {
       int i=p-1;
            int count=0;
            while (i>=0)
            {
                if (a[i]>x)
                {
                    count++;
                }
                else
                {
                    break;
                }
                i--;
            }
            cout<<count<<"\n";
    }
    else if (k<=p && a[p-1]<=x)
        {   
            int c=0;
            for (int i = p-1; i<n; i++)
            {
                if (a[i]<x)
                {
                    c++;
                }
            }
            cout<<c<<"\n";
        }
        else
        {
            cout<<-1<<endl;
        }
}
    
return 0;
}
