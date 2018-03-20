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
	int n;
	while (cin >> n&&n)
	{
		map<vector<int>, int>mp;
		int mx = 0;
		for (int i = 0; i < n; i++)
		{
			vector<int>v(5);
			for (int j = 0; j < 5; j++)
				cin >> v[j];
			sort(all(v));
			mp[v]++;
			mx = max(mp[v], mx);
		}
		vector<pair<vector<int>, int>>cpy(all(mp));
		int ans = 0;
		for (int i = 0; i < cpy.size(); i++)
		{
			if (cpy[i].second == mx)
				ans += mx;
		}
		cout << ans << endl;
	}
	return 0;
	// Work hard in silence, Let SUCCESS be your noise.
}