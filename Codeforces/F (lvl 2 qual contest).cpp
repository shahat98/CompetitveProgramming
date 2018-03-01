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
string x;
vector<int>v(26);
int cost(int x, int y)
{
	return abs(x - y);
}
char mnCost(int st, int en)
{
	ll mn = 1e18;
	char c;
	if (st == 0 && en == x.size() - 1)
		return 'a';
	for (int i = 0; i < 26; i++)
	{
		if (st != 0 && en != x.size() - 1)
		{
			if (cost(v[i], v[x[st - 1] - 'a']) + cost(v[i], v[x[en + 1] - 'a']) < mn)
			{
				mn = cost(v[i], v[x[st - 1] - 'a']) + cost(v[i], v[x[en + 1] - 'a']);
				c = char(i + 'a');
			}
		}
		if (st != 0 && en == x.size() - 1)
		{
			if (cost(v[i], v[x[st - 1] - 'a'])< mn)
			{
				mn = cost(v[i], v[x[st - 1] - 'a']);
				c = char(i + 'a');
			}
		}
		if (st == 0 && en != x.size() - 1)
		{
			if (cost(v[i], v[x[en + 1] - 'a']) < mn)
			{
				mn = cost(v[i], v[x[en + 1] - 'a']);
				c = char(i + 'a');
			}
		}
	}
	return c;
}
int  main()
{
	fast();
	//   run();
	cin >> x;
	for (int i = 0; i < 26; i++)
		cin >> v[i];
	int stidx = -1, enidx = -1;
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] == '?'&&stidx == -1)
		{
			stidx = i;
		}
		if (x[i] != '?'&&stidx != -1)
		{
			enidx = i - 1;
		}
		if (stidx != -1 && enidx != -1)
		{
			char ch = mnCost(stidx, enidx);
			for (int j = stidx; j <= enidx; j++)
				x[j] = ch;
			stidx = -1, enidx = -1;
		}
	}
	if (stidx != -1)
	{
		char ch = mnCost(stidx, x.size() - 1);
		for (int i = stidx; i < x.size(); i++)
			x[i] = ch;
	}
	long long ans = 0;
	for (int i = 0; i < x.size() - 1; i++)
	{
		ans += cost(v[x[i] - 'a'], v[x[i + 1] - 'a']);
	}
	cout << ans << endl;
	cout << x << endl;
	return 0;
}