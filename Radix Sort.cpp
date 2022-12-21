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
void countingSort(int n, int exp) {
	int B[10000], C[10] = {0};
	for (int i = 0; i < n; ++i)
	{
		++C[(A[i] / exp) % 10];
	}
	for (int i = 1; i <= A[n - 1]; ++i)
	{
		C[i] = C[i] + C[i - 1];
	}
	for (int i = n - 1; i >= 0 ; --i)
	{
		B[C[(A[i] / exp) % 10] - 1] = A[i];
		--C[(A[i] / exp) % 10];
	}
	for (int i = 0; i < n; ++i)
	{
		A[i] = B[i];
	}
}
void radixSort(int n)
{
	for (int exp = 1; mx / exp > 0; exp *= 10)
		countingSort(n, exp);
}
Start_Program
{

	cout << "Enter number of index => ";
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> A[i];
	}
	sort(A, A + n);
	mx = A[n - 1];
	radixSort(n);
	for (int i = 0; i < n; ++i)
	{
		cout << A[i] << " ";
	}

	Ok_Done
}