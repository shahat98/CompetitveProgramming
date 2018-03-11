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
	int n, r, l, x;
	cin >> n >> l >> r >> x;
	vector<int>v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	int ans = 0;
	for (int i = 1; i < (1LL << n); i++)
	{
		int cn = 0, mn = INT_MAX, mx = INT_MIN, tot = 0;
		for (int j = 0; j < n; j++)
		{
			if (i&(1LL<<j))
			{
				cn++;
				mn = min(mn, v[j]);
				mx = max(mx, v[j]);
				tot += v[j];
			}
		}
		if (cn >= 2)
		{
			if (mx - mn >= x&&tot >= l&&tot <= r)
				ans++;
		}
	}
	cout << ans << endl;
	return 0;
} 