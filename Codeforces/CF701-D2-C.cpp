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
	cin >> n;
	string x;
	cin >> x;
	set<char>s;
	map<char, int>mp;
	for (int i = 0; i < x.size(); i++)
		s.insert(x[i]);
	int r = 0,cn=0,ans=1e9;
	for (int i = 0; i < n; i++)
	{
		while (r < n&&cn<s.size())
		{
			if (!mp[x[r]])
				cn++;
			mp[x[r]]++;
			r++;
			if (cn == s.size())
				break;
		}
		if (cn == s.size())
			ans = min(ans, (r-1) - i + 1);
		mp[x[i]]--;
		if (!mp[x[i]])
			cn--;
	}
	cout << ans << endl;
	return 0;
	// Work hard in silence, Let SUCCESS be your noise.
}