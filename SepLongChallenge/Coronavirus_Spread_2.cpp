 #include <bits/stdc++.h>
using namespace std;
  vector<pair<int,double>>ad[6];;
int visited[6];
int count1;
void dfs(int node,int par,double time);
bool sortbysec(const pair<int,double> &a,
              const pair<int,double> &b) ;
int main()
{
    int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;
       
for(int i=0;i<=n;i++)
{
    ad[i].clear();
}
       int arr[n+1];
       for(int i=1;i<=n;i++)
       {
          cin>>arr[i];

       }

       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=n;j++)
           {
if((arr[j]-arr[i])!=0){
        double x=double(i-j)/double(arr[j]-arr[i]);

                   if((i>j&&arr[i]<arr[j])||(i<j&&arr[i]>arr[j]))
                    ad[i].push_back(make_pair(j,x));

                    }

           }
       }
       for(int i=1;i<=n;i++)
       {
           sort(ad[i].begin(),ad[i].end(),sortbysec);
       }
  int min1=n;
    int max1=1;
    for(int i=1;i<=n;i++)
    {
        count1=0;
        for(int j=0;j<=n;j++)
            visited[j]=-1;
        dfs(i,0,0);
        min1=min(count1,min1);
        max1=max(count1,max1);
    }
    cout<<min1<<" "<<max1<<endl;

    }

}
bool sortbysec(const pair<int,double> &a,
              const pair<int,double> &b)
{
    return (a.second < b.second);
}
void dfs(int node,int par,double time)
{
    count1=count1+1;
    visited[node]=1;
    for(int i=0;i<ad[node].size();i++)
    {
   
      if(visited[ad[node][i].first]!=1&&ad[node][i].second>=time)
         dfs(ad[node][i].first,node,ad[node][i].second);
    }



}

