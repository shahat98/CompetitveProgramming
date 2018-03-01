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
	string Adrian = "ABC", Bruno = "BABC", Goran = "CCAABB";
	int n;
	cin >> n;
	string x;
	cin >> x;
	map<string, int>mp;
	int mx = 0;
	for (int i = 0; i < x.size(); i++)
	{
		if (Adrian[i % 3] == x[i])
			mp["Adrian"]++,mx=max(mx,mp["Adrian"]);
		if (Bruno[i % 4] == x[i])
			mp["Bruno"]++, mx = max(mx, mp["Bruno"]);
		if (Goran[i % 6] == x[i])
			mp["Goran"]++, mx = max(mx, mp["Goran"]);
	}
	vector<pair<string, int>>v(all(mp));
	sort(all(v));
	cout << mx << endl;
	for (int i = 0; i < v.size();i++)
	if (v[i].second == mx)
		cout << v[i].first << endl;
	return 0;
}