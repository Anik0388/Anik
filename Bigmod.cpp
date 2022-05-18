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
//#define 	N 						100010
 
const ll M= ll(1e9+7);
 
bool decending(ll a,ll b){ return (a>b);}
 
int bigmod(ll a, ll b, ll N)
{
	ll x;
	if (b==0)
	{
		return 1 % N;
	}
	x = bigmod(a,b/2,N);
 
	x = (x*x) % N;
 
	if (b%2==1)
	{
		x=(x*a) % N;
	}
	return x;
 
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
	cout<<bigmod(2,t,M)<<endl;
 
	
 
	Ok_Done
}
