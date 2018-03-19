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
ll n, k;
bool chk(ll x)
{
	ll tot = x;
	int po = 1;
	if (!x)
		return 0;
	if (x == 1)
		x = x;
	while (tot < n)
	{
		tot += (x / pow(k, po));
		if (!(x / pow(k, po++)))
			break;
	}
	if (tot >= n)
		return 1;
	return 0;
}
int  main()
{
	fast();
	run();
	cin >> n >> k;
	ll st = 0, en = 1e9, mid, ans = -1;
	while (st <= en)
	{
		mid = (st + en) / 2;
		if (chk(mid))
		{
			ans = mid;
			en = mid - 1;
		}
		else
			st = mid + 1;
	}
	if (ans != -1)
		cout << ans << endl;
	else
		cout << 1 << endl;
	return 0;
} 
