#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    int n,i,type,mark;
    string name;
    cin>>n;
 map<string,int>mp;
    while(n--)
    {

        cin>>type>>name;
        if(type==1)
        {
            cin>>mark;

            mp[name]+=mark;
        }
        else if(type==2)
        {
            mp.erase(name);
        }
        else
        {
            cout<<mp[name]<<endl;
        }
    }
    return 0;
}
