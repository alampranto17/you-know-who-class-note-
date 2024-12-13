#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> Pair;

int main()
{
    vector<int>v (4,8);

    for(int i =0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.push_back(7);

    vector<int>:: iterator it;

    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    v.push_back(9);

    for(auto it =v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    // priority Queue

    priority_queue<int,vector<int>>p; //by defeult max heap thake;

    p.push(10);
    p.push(11);
    p.push(8);

    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }
    cout<<endl;

     priority_queue<int,vector<int>,greater<int>>pq; //by defeult max heap thake;

    pq.push(10);
    pq.push(11);
    pq.push(8);

    while(!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }

    // pair of priority queue

    priority_queue<Pair,vector<Pair>,greater<Pair>> a;

    a.push(make_pair(10,8)); //10 is equeal then second value will compair;
    a.push(make_pair(10,6));
    a.push(make_pair(8,8));
    a.push(make_pair(0,12));


     while(!a.empty())
    {
        cout<<a.top().first<<" "<<a.top().second<<endl;
        a.pop();
    }




}
