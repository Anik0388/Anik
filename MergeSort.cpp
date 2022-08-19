#include<iostream>
#include<cstring>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long int ll;
#define mx 100001
int arr[]={6,5,4,1,2,3,7,8};
int tree[mx * 3];
void merge(int l, int mid, int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1+1],i,j,k;
    int b[n2+1];
    for (i = 0; i < n1; ++i)
    {
        a[i]=arr[l+ i];

    }
    for (i = 0; i < n2; ++i)
    {
        b[i]=arr[mid + 1 + i];
    }
    a[n1]=b[n2]=INT_MAX;
    int L=0;
    int R=0;
    for (i = l; i <=r; ++i)
    {
        if (a[L]<b[R])
        {
            arr[i]=a[L];
            L++;
        }
        else
        {
            arr[i]=b[R];
            R++;
        }
    } 
}

void mergesort(int l,int r)
{
    if (l<r)
    {
        int mid=(l+r)/2;
        mergesort(l,mid);
        mergesort(mid+1,r);
        merge(l,mid,r);
    }
}

int main()
{
    int i;
    int l=0;
    int r=7;
    mergesort(l,r);
    for (i = 0; i < 8; ++i)
    {
        cout<<arr[i]<<" ";
    }
    
}