#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b)
{
   if(a.first==b.first)
   {
       return a.second>b.second;
   }return a.first>b.first;

}
int main()
{
    int n,m,i,j,a,b;
    cin>>n;
    vector<pair<int,int>>v;
    for(i=0;i<n;i++)
    {
    cin>>a>>b;
    v.push_back(make_pair(a,b));
    }
    cout<<"Before sorting"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
 cout<<"After sorting"<<endl;
 sort(v.begin(),v.end(),cmp);
 for(i=0;i<n;i++)
 {
     cout<<v[i].first<<" "<<v[i].second<<endl;
 }
return 0;
}
