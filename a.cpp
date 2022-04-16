/**************************************************************************
*                       ____        ____      _   _   _    _              *
*                      / /\ \      | |\ \    | | | | | |  / /	          *
*                     / /  \ \     | | \ \   | | | | | | / /              *
*                    / /----\ \    | |  \ \  | | | | | |/ /               *
*                   / /------\ \   | |   \ \ | | | | | |\ \               *
*                  / /        \ \  | |    \ \| | | | | | \ \              *
*                 /_/          \_\ |_|     \_|_| |_| |_|  \_\             *
*                                                                         *
*                                                                         *
*     Department of Computer Science & Engineering                        *
*     Bangabnadhu Sheikh Mujibur Rahman Science & Technology University,  *
*                            Gopalganj-8100.                              *
*                                                                         *
***************************************************************************/
#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<list>
#include<iterator>
#include<map>
#include<utility>
#include<set>
using namespace std;

typedef 	long long int 			ll;

#define 	pi 						acos(-1)
#define 	Start_Program 			int main()
#define 	loop(n) 				for (ll i = 0; i < n; ++i)
#define 	Ok_Done 				return 0;
#define 	N 						100010

const int M= int(1e4+5);

bool decending(int a,int b){ return (a>b);}
bool func(ll x)
{
	for (int i = 2; i*i<=x; ++i)
	{
		if (x%i==0)
		{
			return false;
		}
	}
	return true;

}


Start_Program
{
	ll n, k=0, l, c=0, d, p=0, nl, np, i=1, j=1,sum=0,m,t,a=0,x=1,y=0,z,q=0,ans=0,S=0,D=0,b;
	//ll t,x=0,y,z;
	// ll r=0,b=0,g=0;
	double zz;
	//int ar[1005],aa[M],rr[M];
	// vector<pair<int , int > > mp; 
	vector<int>vc;
	// vector<int>:: iterator it,ii;
	// string st,ss;
	cin>>t;
	while(t--) {
	    cin>>a>>b>>c;
	    k=max((max(a,b)),c);
	    if ((a==0 ||a==b) && (b==0 || b==c) && (c==a || c==0))
	    {
	    	cout<<a+1<<" "<<b+1<<" "<<c+1<<endl;
	    }
	    else
	    {
	    	if (k==a)
	    	{
	    		cout<<k-a<<" "<<k-b+1<<" "<<k-c+1<<endl;
	    	}
	    	else if (k==b)
	    	{
	    		cout<<k-a+1<<" "<<k-b<<" "<<k-c+1<<endl;
	    	}
	    	else if (k==c)
	    	{
	    		cout<<k-a+1<<" "<<k-b+1<<" "<<k-c<<endl;
	    	}

	    }




	}
	Ok_Done
}