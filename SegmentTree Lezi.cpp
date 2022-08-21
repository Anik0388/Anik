#include<bits/stdc++.h>
#include<cstring>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int ll;
#define mx 200005
ll ar[mx];

struct info
{
    ll sum,prop=0ll;
}tree[mx * 4];

void init(ll node,ll b,ll e)
{
    if (b==e)
    {
        tree[node].sum=ar[b];
        return;
    }
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node].sum=tree[left].sum+tree[right].sum;
    //tree[node]=min(tree[left],tree[right]);
}

void update(ll node,ll b,ll e,ll i,ll j,ll x)
{
    if (j<b ||  i>e)
    {
        return;
    }
    if (i<=b && j>=e)
    {
        tree[node].sum+=(e-b+1)*x;
        tree[node].prop+=x;
        return;
    }
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    update(left,b,mid,i,j,x);
    update(right,mid+1,e,i,j,x);
    tree[node].sum=tree[left].sum + tree[right].sum + (e-b+1)*tree[node].prop;
}

ll quary(ll node,ll b,ll e,ll i,ll j,ll x=0)
{
    if (j<b || i>e)
    {
        return 0;
    }
    if (i<=b && j>=e)
    {
        return tree[node].sum + (e-b+1)*x;
    }
    ll left = node*2;
    ll right =node *2+1;
    ll mid=(b+e)/2;
    ll p1=quary(left,b,mid,i,j,x+tree[node].prop);
    ll p2=quary(right,mid+1,e,i,j,x+tree[node].prop);
    return p1+p2;
}


int main()
{
    ll n,i,j,k,a,x,b,c,m;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
    init(1,1,n);
    while(m--) {
        cin>>x;
        if (x==1)
        {
            cin>>a>>b>>c;
            update(1,1,n,a,b,c);
        }
        else
        {
            ll y,z;
            cin>>y;
            cout<<quary(1,1,n,y,y)<<endl;
        }
    }
    
    

}