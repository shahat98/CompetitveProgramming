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
	int t;
	cin >> t;
	int T = 0;
	while (t--)
	{
		T++;
		int n, m, k;
		cin >> n >> m >> k;
		vector<int>v(n);
		v[0] = 1, v[1] = 2, v[2] = 3;
		for (int i = 3; i < n; i++)
		{
			v[i] = ((v[i - 1] + v[i - 2] + v[i - 3]) % m) + 1;
		}
		int r = 0,ans=1e9,cn=0;
		map<int, int>mp;
		for (int i = 0; i < n; i++)
		{
			while (r < n&&cn<k)
			{
				if (v[r] <= k&&!mp[v[r]])
					cn++;
				if (v[r] <= k)
					mp[v[r]]++;
				r++;
				if (cn == k)
					break;
			}
			if (cn == k)
				ans = min(ans, (r - 1) - i + 1);
			if (v[i] <= k)
			{
				mp[v[i]]--;
				if (!mp[v[i]])
					cn--;
			}
		}
		cout << "Case " << T << ": ";
		if (ans != 1e9)
			cout << ans << endl;
		else
			cout << "sequence nai" << endl;
	}
	return 0;
	// Work hard in silence, Let SUCCESS be your noise.
}