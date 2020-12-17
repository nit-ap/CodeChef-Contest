
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t,n,y,a[100001],k=30;
    scanf("%lld",&t);
    while(t--){
    scanf("%lld %lld",&n,&y);
    if(n==2)
    {
    scanf("%lld %lld",&a[0],&a[1] );
    if(a[0]==0)
    {
        if (y%2!=0)
        {
            a[0]=1;
            a[1]=a[1]^1;
        }
    }
    else
    {
    while (y-- > 0)
    {
        int p = int(log(a[0]) / log(2));
        a[0] = a[0] ^ (int) pow(2, p);
        a[1] = a[1] ^ (int) pow(2, p);
        if (a[0]==0) break;
    }
    if (y>0&&y%2!=0)
    {
        a[0]=1;
        a[1]=a[1]^1;
    }
    }
    }



    else
    {
    vector<vector<ll>>idy(k+1);
    for(ll i=0;i<n;i++){
        scanf("%lld",&(a[i]));
        if(i==n-1)continue;
        for(ll j=k;j>=0;j--)if (a[i]&(1LL<<j)){
            idy[j].push_back(i);
        }
    }
    vector<ll> cnt(k+1,0);
    for(ll i=0;i<n-1;i++){
        for(ll j=k;j>=0;j--){
            ll mask =1LL<<j;
            if((a[i]&mask)==0)continue;
            a[i]^=mask;
            ll d;
            if(++cnt[j]<idy[j].size()){
                d= idy[j][cnt[j]++];
            }else d=n-1;
            a[d]^=mask;
            if(--y==0)break;
        }
        if(y==0)break;
    }
    }
        for (int i=0;i<n;i++)
        cout << a[i] << " ";

    }

}

//Code Writer:-Amit yadav
