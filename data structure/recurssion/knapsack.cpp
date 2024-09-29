#include<bits/stdc++.h>
using namespace std;
bool sorting(const pair<int,int>&a,const pair<int,int>&b)
{

    float p=(float)a.first/a.second;
    float q=(float)b.first/b.second;
    return p>q;
}
int main()
{


    int x,n;
    cin>>x>>n;
    vector<pair<int,int>>v(x);

    for(int i=0; i<x; i++)
    {
        int x,y;
        cin>>x>>y;
        v[i]=make_pair(x,y);
    }
    sort(v.begin(),v.end(),sorting);

    for(int i =0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    int current=0;
    int sum=0;
    for(int i =0;i<v.size();i++)
    {
        if(current+ v[i].second<=n)
        {
            current+=v[i].second;
            sum+=v[i].first;
        }
        else
        {
            float remain=n-current;
            float z=(float)v[i].first/v[i].second;
            sum+=(remain*z);
            break;
        }

    }
    cout<<sum<<endl;
}

