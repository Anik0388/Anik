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


int max (int a, int b, int c)
{
	return max(max(a, b), c);
}
int A[1000], mx;
int sumary(int low, int mid, int high)
{
	int sum = 0;
	int left_sum = INT_MIN;
	for (int i = mid; i >= low; --i)
	{
		sum += A[i];
		if (sum > left_sum)
		{
			left_sum = sum;
		}
	}
	sum = 0;
	int right_sum = INT_MIN;
	for (int i = mid; i <= high ; ++i)
	{
		sum += A[i];
		if (sum > right_sum)
		{
			right_sum = sum;
		}
	}
	return max((left_sum + right_sum - A[mid]), left_sum, right_sum);

}

int Max_subArray_sum(int low, int high)
{
	if (low > high)
	{
		return INT_MIN;
	}
	if (low == high)
	{
		return A[low];
	}
	int mid = (low + high) / 2;

	return max(Max_subArray_sum(low, mid - 1), Max_subArray_sum(mid + 1, high), sumary(low, mid, high));
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
	cout << Max_subArray_sum(0, n - 1) << endl;

	Ok_Done
}