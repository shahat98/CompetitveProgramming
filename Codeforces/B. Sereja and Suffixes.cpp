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
int  main()
{
	fast();
	run();
	int n, m;
	cin >> n >> m;
	vector<pair<int,int>>v(n+2);
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i].first;
	}
	map<int, int>mp;
	for (int i = n; i >=1; i--)
	{
		if (!mp[v[i].first])
		{
			v[i].second += v[i + 1].second + 1;
			mp[v[i].first] = 1;
		}
		else
			v[i].second += v[i + 1].second;
	}
	int l;
	for (int i = 0; i < m; i++)
	{
		cin >> l;
		cout << v[l].second << endl;
	}
	return 0;
}