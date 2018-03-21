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
#define endl "\n"
//#define int ll
#define PI 3.14159265
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
// Run away as you wish, you are always traveling between my ribs.
vector<int>v;
int m;
bool chk(int x)
{
	int cn = m, sum = 0;
	int i = 0;
	for (; i < v.size()&&cn; i++)
	{
		if (sum + v[i] <= x)
			sum += v[i];
		else
		{
			cn--;
			sum = 0;
			i--;
		}
	}
	return i == v.size();
}
int  main()
{
	fast();
	run();
	int n;
	while (cin >> n >> m)
	{
		v.resize(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		int st = 0, en = 1e9, mid, ans = 1e9;
		while (st <= en)
		{
			mid = (st + en) / 2;
			if (mid == 13)
				mid = mid;
			if (chk(mid))
				ans = min(ans, mid), en = mid - 1;
			else
				st = mid + 1;
		}
		cout << ans << endl;
	}
	return 0;
	// Work hard in silence, Let SUCCESS be your noise.
}