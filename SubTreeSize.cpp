#include<bits/stdc++.h>
using namespace std; 
std::vector<int > g[1001];
int subtree_size[1001];
void  dfs(int   node, int parent )
 {
    subtree_size[node]=1; 
    for(int child:g[node]){
        if(parent==child)continue;
        dfs(child, node); 
        subtree_size[node]+=subtree_size[child]; 
    }
}

int main()
{
    int n ; 
    cin>>n ; 
    for(int i = 1;i<=n ; i++)
    {
        int u , v; 
        cin>>u>>v; 
        g[u].push_back(v); 
        g[v].push_back(u); 
    }
    dfs(1, 0);
    for(int i =1;i<= n;i++)cout<<subtree_size[i]<<" ";
    /*int w;
    cin>>w;
    cout<<subtree_size[w]<<endl;*/
    cout<<endl;  
}



