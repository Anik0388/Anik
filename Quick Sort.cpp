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
#define		R 						int(2e5+1)
#define     yes                     printf("YES\n");
#define     no                      printf("NO\n");

bool decending(ll a, ll b) { return (a > b);}
ll recartion(ll n)
{
	if (n == 0)
	{
		return 1;
	}
	return n * recartion(n - 1);
}
int A[1000], mx;
int partition(int low, int high)
{
	int privot = A[high];
	int j = low - 1;
	for (int i = low ; i <=  high - 1; ++i)
	{
		if (A[i] < privot)
		{
			j++;
			swap(A[i], A[j]);
		}
	}
	swap(A[j + 1], A[high]);
	return (j + 1);
}
void quick_sort(int low , int high)
{
	if (low < high)
	{
		int val = partition(low, high);
		quick_sort(low, val - 1);
		quick_sort(val + 1, high);
		/* code */
	}
}
Start_Program
{

	cout << "Enter number of index => ";
	int n, i;
	cin >> n;
	for (i = 0; i < n; ++i)
	{
		cin >> A[i];
	}
	quick_sort(0, n - 1);
	for (i = 0; i < n; ++i)
	{
		cout << A[i] << " ";
	}

	Ok_Done
}