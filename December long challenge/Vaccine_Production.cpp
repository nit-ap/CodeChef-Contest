#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    

    int d1,d2,v1,v2,p,x,d,r;
    
    cin>>d1>>v1>>d2>>v2>>p;
    if(d1==d2)
    {
        if(p%(v1+v2)==0)
         cout<<p/(v1+v2)+(d1-1)<<endl;
         else
         cout<<p/(v1+v2)+1+(d1-1)<<endl;
    }
    else if(d1>d2)
    {
        d=d2-1;
        r=(d1-d2);
        x=p-r*v2;
        if(x<=0)
        {
            if(p%v2==0)
            d+=p/v2;
            else
            {
                d+=p/v2+1;
            }
           cout<<d<<endl; 
        }
        else
        {
            d+=r;
            if(x%(v1+v2)==0)
            d+=x/(v1+v2);
            else
            {
                d+=x/(v1+v2)+1;
            }
           cout<<d<<endl; 
        }
        
    }
    else
    {
        d=d1-1;
        r=(d2-d1);
        x=p-r*v1;
        if(x<=0)
        {
            if(p%v1==0)
            d+=p/v1;
            else
            {
                d+=p/v1+1;
            }
           cout<<d<<endl; 
        }
        else
        {
            d+=r;
            if(x%(v1+v2)==0)
            d+=x/(v1+v2);
            else
            {
                d+=x/(v1+v2)+1;
            }
           cout<<d<<endl; 
        }
    }
    
return 0;
}

//Code Writer:-Amit yadav