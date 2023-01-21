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
#define 	Start_Program 			int main()
#define 	Ok_Done 				return 0;
typedef 	long long int 			ll;
#define     yes                     printf("YES\n");
#define     no                      printf("NO\n");
bool decending(ll a, ll b) { return (a > b);}
//int A[] = {0, 6, 5, 4, 3, 2, 1};
//int A[] = {0, 1, 2, 3, 4, 5, 6};
//int A[100], aa[] = {201, 345, 999, 333, 541, 573, 888};
Start_Program
{
	int A[10000],key = 0;
	cout << "Enter number of index => ";
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> A[i];
		if(key < A[i])
		{
			key = A[i];
		}
	}
	//sort(A, A + n);
	int B[10000], C[key + 1] = {0};
	for (int i = 0; i < n; ++i)
	{
		++C[A[i]];
	}
	for (int i = 1; i <= key; ++i)
	{
		C[i] = C[i] + C[i - 1];
	}
	for (int i = n; i >= 0 ; --i)
	{
		B[C[A[i]] - 1] = A[i];
		--C[A[i]];
	}
	for (int i = 0; i < n; ++i)
	{
		cout << B[i] << " ";
	}
	Ok_Done
}
