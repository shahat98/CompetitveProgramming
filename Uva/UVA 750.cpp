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
vector<vector<pair<int,int>>>ans;
vector<pair<int,int>>cur;
int x, y;
void solve(int i)
{
	if (i == 8)
	{
		cur.clear();
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (v[i][j])
					cur.push_back({ j + 1, i + 1 });
			}
		}
		sort(all(cur));
		ans.push_back(cur);
		return;
	}
	if (i == x)
		solve(i + 1);
	for (int j = 0; j < 8; j++)
	{
		if (!col[j] && !row[i] && !m_dia[(i - j) + 8] && !s_dia[i + j])
		{
			col[j] = 1; row[i] = 1; m_dia[(i - j) + 8] = 1; s_dia[i + j] = 1;
			v[i][j] = 1;
			solve(i + 1);
			col[j] = 0; row[i] = 0; m_dia[(i - j) + 8] = 0; s_dia[i + j] = 0;
			v[i][j] = 0;
		}
	}
}
int  main()
{
	fast();
	run();
	int t;
	cin >> t;
	while (t--)
	{
		cout << "SOLN       COLUMN" << endl;
		cout << " #      1 2 3 4 5 6 7 8" << endl << endl;
		cin >> x >> y;
		x--, y--;
		col[y] = 1; row[x] = 1; m_dia[(x - y) + 8] = 1; s_dia[x + y] = 1;
		v[x][y] = 1;
		solve(0);
		int num = 0;
		sort(all(ans));
		for (auto it : ans)
		{
			num++;
			if (num<10)
			cout <<" "<< num << "      ";
			else
				cout << num << "      ";
			for (int i = 0; i < it.size(); i++)
			{
				if (i)
					cout << " ";
				cout << it[i].second;
			}
			cout << endl;
		}
		ans.clear();
		for (int i = 0; i < 8; i++)
		{
			col[i] = 0;
			row[i] = 0;
			for (int j = 0; j < 8; j++)
			{
				v[i][j] = 0;
				m_dia[(i - j) + 8] = 0;
				s_dia[(i + j)] = 0;
			}
		}
		if (t)
			cout << endl;
	}
	return 0;
	// Work hard in silence, Let SUCCESS be your noise.
}