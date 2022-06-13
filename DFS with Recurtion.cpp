#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<iomanip>
#include<vector>
#include<list>
#include<iterator>
#include<map>
#include<queue>
#include<utility>
#include<set>
#define endl "\n"
using namespace std;
typedef long long ll;
//typedef unsigned long long ull;
const int N = 4e4 + 100;
vector<int> visit(1000,0);
vector<int>v[1000+1];


void dfs(int node)
{
    cout<<node<<endl;
    visit[node]=1;
    for (int child :  v[node])
    {
        if (visit[child]==0)
        {
            visit[child]=1;
            dfs(child);
        }
    }
}



int main()
{
    int node=5,edge=6;
    cin>>node>>edge;
    
    //vector<vector<int>> vc;
    for (int i = 0; i < edge; ++i)
    {
    	int x,y;
    	cin>>x>>y;
  		v[x].push_back(y);
  		v[y].push_back(x);
    }
    int sorce;
    cin>>sorce;
    dfs(sorce);
    


    
}