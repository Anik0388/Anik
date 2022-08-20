#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll ar[200005];
ll tree[200005*3];
void init(int node,int b,int e)
{
    if (b==e)
    {
        tree[node]=ar[b];
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    //tree[node]=tree[left]+tree[right];
    tree[node]=min(tree[left],tree[right]);
}


void update(int node, int b,int e,int i,int j)
{
    if (i<b || i>e)
    {
        return;
    }
    if (b >= i && e <= i)//(b >= i && e <= i
    {
        tree[node]=j;
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    update(left,b,mid,i,j);
    update(right,mid+1,e,i,j);
    //tree[node]=tree[left]+tree[right];
    tree[node]=min(tree[left],tree[right]);
}


int quary(int node, int b,int e,int i,int j)
{
    if (j<b || i>e)
    {
        return 1e9;
    }
    if (i<=b && j>=e)
    {
        return tree[node];
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    int p1=quary(left,b,mid,i,j);
    int p2=quary(right,mid+1,e,i,j);
    return min(p1,p2);

}



int main()
{
    ll n,q,x,y,i;
    cin>>n;//>>q;
    for (i = 1; i <=n ; ++i)
    {
        cin>>ar[i];
    }
    init(1,1,n);
    // for (i = 1; i <=2*5; ++i)
    // {
    //  cout<<tree[i]<<" ";
    // }
    //while(q--) {
        cin>>x>>y;
        cout<<quary(1,1,n,x,y)<<endl;
        update(1,1,n,3,0);
        cout<<quary(1,1,n,x,y)<<endl;
    //}
 
    
    return 0;
}