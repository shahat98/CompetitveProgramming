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
vector<int>col(8), row(8), m_dia(18), s_dia(18);
vector<vector<int>>v(8, vector<int>(8)), val(8, vector<int>(8));
ll solve(int i)
{
	if (i == 8)
	{
		ll mx = 0;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (v[i][j])
					mx += val[i][j];
			}
		}
		return mx;
	}
	ll ret = -1;
	for (int j = 0; j < 8; j++)
	{
		if (!col[j] && !row[i] && !m_dia[(i - j) + 8] && !s_dia[i + j])
		{
			col[j] = 1; row[i] = 1; m_dia[(i - j) + 8] = 1; s_dia[i + j] = 1;
			v[i][j] = 1;
			ret = max(ret, solve(i + 1));
			col[j] = 0; row[i] = 0; m_dia[(i - j) + 8] = 0; s_dia[i + j] = 0;
			v[i][j] = 0;
		}
	}
	return ret;
}
int  main()
{
	fast();
	run();
	int t;
	cin >> t;
	while (t--)
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				cin >> val[i][j];
			}
		}
		cout << setw(5)<<solve(0) << endl;
	}
	return 0;
	// Work hard in silence, Let SUCCESS be your noise.
}