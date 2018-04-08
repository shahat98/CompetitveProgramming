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
int fixMod(int a, int b){ return ((a%b) + b) % b; }
void fast()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
// Run away as you wish, you are always traveling between my ribs.
int n;
vector<int>v;
int solve(int i, int last)
{
	if (i == n + 2)
		return 0;
	int ret = solve(i + 1, last);
	int ret1 = 0;
	if (v[i] > last)
		ret1 = solve(i + 1, v[i]) + 1;
	return max(ret, ret1);
}
int  main()
{
	fast();
	run();
	cin >> n;
	v.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	v.insert(v.begin(), -1);
	v.push_back(0);
	cout << solve(1, -1) << endl;
	return 0;
	// Work hard in silence, Let SUCCESS be your noise.
}