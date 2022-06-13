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

int main()
{
    int node=5,edge=6;
    cin>>node>>edge;
    vector<int>v[node+1];
    //vector<vector<int>> vc;
    for (int i = 0; i < edge; ++i)
    {
    	int x,y;
    	cin>>x>>y;
  		v[x].push_back(y);
  		v[y].push_back(x);
    }
    queue<int>q;
    vector<int> visit(node+1,0);
    int sorce;
    cin>>sorce;
    visit[sorce]=1;
    q.push(sorce);
    while(q.size()>0) {
        int z=q.front();
        cout<<z<<endl;
        q.pop();
        for(int c : v[z])
        {
        	if(visit[c]==0)
        	{
        		q.push(c);
        		visit[c]=1;
        	}
        }
    }


    
}