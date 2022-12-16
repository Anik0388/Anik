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
int A[10000];
void heapify(int n, int i)
{
	int largest = i;
	int l = 2 * i;
	int r = 2 * i + 1;
	while (l < n && A[l] > A[largest]) {
		largest = l;
	}
	while (r < n && A[r] > A[largest]) {
		largest = r;
	}
	if (largest != i)
	{
		swap(A[largest], A[i]);
		heapify(n, largest);
	}
}
void heapSort(int n)
{
	for (int i = n / 2; i >= 1; i--)
	{
		heapify(n, i);
	}
	for (int i = n; i >= 1; i--)
	{
		swap(A[1], A[i]);
		heapify(i, 1);
	}
}
void insertHeap(int n ,  int val)
{
	//n=n+1;
	A[n] = val;
	int i = n;
	while (i > 1) {
		int parent = i / 2;
		if (A[parent] < A[i])
		{
			swap(A[parent], A[i]);
			i = parent;
		}
		else
		{
			return;
		}
	}

}
Start_Program
{
	int n, k;
	cin >> n;
	for (int i = 1; i <= n ; ++i)
	{
		cin >> k;
		insertHeap(i, k);
	}
	for (int i = 1; i <= n; ++i)
	{
		cout << A[i] << " ";
	}
	cout << "\n";
	heapSort(n);
	for (int i = 1; i <= n; ++i)
	{
		cout << A[i] << " ";
	}

	Ok_Done
}