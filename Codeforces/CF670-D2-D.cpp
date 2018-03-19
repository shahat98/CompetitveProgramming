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
vector<ull>v, v1;
int k;
bool chk(ull x)
{
	ll mag = k;
	for (int i = 0; i < v.size(); i++)
	{
		ull need = (x*v[i]);
		if (need <= v1[i])
			continue;
		if (need <= v1[i] + mag)
			mag -= (need - v1[i]);
		else
			return 0;
	}
	return 1;
}
int  main()
{
	fast();
	run();
	int n;
	cin >> n >> k;
	v.resize(n);
	v1.resize(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	for (int i = 0; i < n; i++)
		cin >> v1[i];
	ll st = 0, en = 1e10, mid, ans = -1;
	while (st <= en)
	{
		mid = (st + en) / 2;
		if (chk(mid))
		{
			ans = max(ans, mid);
			st = mid + 1;
		}
		else
			en = mid - 1;
	}
	cout << ans << endl;
	return 0;
	// Work hard in silence, Let SUCCESS be your noise.
}