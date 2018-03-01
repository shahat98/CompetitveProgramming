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
    run ();
	int n;
	cin >> n;
	vector<pair<int, int>>v(n+1);
	for (int i = 0; i < n; i++)
		cin >> v[i].first;
	int q;
	cin >> q;
	int a, b;
	while (q--)
	{
		cin >> a >> b;
		v[a - 1].second++;
		v[b].second--;
	}
	int ans = 0;
	if (v[0].second == 0)
		ans++;
	for (int i = 1; i < n; i++)
	{
		v[i].second += v[i-1].second;
		if (v[i ].second == 0)
			ans++;
	}
	cout << ans << endl;
	for (int i = 0; i < n; i++)
	{
		if (!v[i].second)
			cout << v[i].first << " ";
	}
	return 0;
}