#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
// const int xm =1000;
// int arrive[xm];
// int down[xm];
// int store[xm];
bool cmp(const pair<string,pair<int,int>>&p1,const pair<string,pair<int,int>>&p2)
{
    if(p1.second.first>p2.second.first)
    {
        return true;
    }
    else if(p1.second.first==p2.second.first)
    {
        return p1.second.second<p2.second.second;
    }
    return false;
}

void solve()
{
    int n;
    cin>>n;
    vector<pair<string,pair<int,int>>>p(n);
    for(int i =0;i<n;i++)
    {char c;
    cin>>c;
    string s;
    cin>>s;
    s=c+s;
       p[i].first=s;
       cin>>p[i].second.first;
       cin>>p[i].second.second;
    }

   sort(p.begin(),p.end(),cmp);

   for(auto u : p)
   {
       cout<<u.first<<" "<<u.second.first<<" "<<u.second.second<<endl;
   }




}

int main()
{
   optimize();


       solve();



     }

