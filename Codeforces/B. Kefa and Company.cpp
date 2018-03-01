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
void run()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
}
void fast()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
int  main()
{
	fast();
	int n, d;
	cin >> n >> d;
	vector<pair<int, int>>v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i].first >> v[i].second;
	}
	sort(all(v));
	ll ans = -1, mx =v[0].second,dif=0;
	for (int i = 1; i < n; i++)
	{
		if (v[i].first - v[i - 1].first < d&&dif+(v[i].first-v[i-1].first)<d)
		{
			mx+=v[i].second;
			dif += (v[i].first - v[i - 1].first);
		}
		else
		{
			ans = max(ans, mx);
			mx = v[i].second;
			dif = 0;
		}
	}
	ans = max(mx, ans);
	cout << ans << endl;
	return 0;

}