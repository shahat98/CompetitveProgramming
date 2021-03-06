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
int  main()
{
	fast();
	run();
	int n, m;
	cin >> n >> m;
	vector<pair<ll, ll>>v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i].second,v[i].second*=-1;
	int x;
	for (int i = 0; i < m; i++)
		cin >> x, v[x - 1].first = 1;
	sort(all(v));
	ll ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (!v[i].first)
		{
			ans += (v[i].second*-1);
		}
		else
			ans += max(ans,(v[i].second)*-1);
	}
	cout << ans << endl;
	return 0;
	// Work hard in silence, Let SUCCESS be your noise.
}