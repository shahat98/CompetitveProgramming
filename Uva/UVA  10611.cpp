#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <bitset>
#include <cmath>
#include <stack>
#include <string>
#include <iomanip>
#include <queue>
#include <deque>
#include<cstring>
#include<limits>
#include <sstream>
#include <stdio.h>
#include<unordered_map>
using namespace std;
#define sz(x) (x).size()
#define all(v) (v).begin(),(v).end()
#define m_p make_pair
#define ll long long 
#define ull unsigned ll
#define PI 3.14159265
#define endl "\n"
void run()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
#endif
}
void fast()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
int  main()
{
	fast();
	run();
	int n;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	sort(all(v));
	int q;
	cin >> q;
	int x;
	for (int i = 0; i < q; i++)
	{
		cin >> x;
		int st = 0, en = n - 1, mid, ans = -1;
		while (st <= en)
		{
			mid = (st + en) / 2;
			if (v[mid] < x)
			{
				ans = v[mid];
				st = mid + 1;
			}
			else
				en = mid - 1;
		}
		if (ans != -1)
			cout << ans << " ";
		else
			cout << "X ";
		st = 0, en = n - 1, mid, ans = -1;
		while (st <= en)
		{
			mid = (st + en) / 2;
			if (v[mid] > x)
			{
				ans = v[mid];
				en = mid - 1;
			}
			else
				st = mid + 1;
		}
		if (ans != -1)
			cout << ans;
		else
			cout << "X";
		cout << endl;
	}
	return 0;
} 