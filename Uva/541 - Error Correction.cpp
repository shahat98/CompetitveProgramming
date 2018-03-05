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
#define endl "\n"
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
vector<vector<int>>v;
int n;
bool chk()
{
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j < n; j++)
		{
			sum += v[i][j];
		}
		if (sum % 2)
			return 0;
	}
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j < n; j++)
		{
			sum += v[j][i];
		}
		if (sum % 2)
			return 0;
	}
	return 1;
}
int  main()
{
	fast();
	run();
	while (cin >> n)
	{
		if (!n)
			return 0;
		v.resize(n);
		for (int i = 0; i < n; i++)
		{
			v[i].resize(n);
			for (int j = 0; j < n; j++)
			{
				cin >> v[i][j];
			}
		}
		if (chk())
		{
			cout << "OK" << endl;
			continue;
		}
		map<int, int>flib;
		flib[1] = 0;
		flib[0] = 1;
		bool flag = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				v[i][j] = flib[v[i][j]];
				if (chk())
				{
					cout << "Change bit (" << i + 1 << "," << j + 1 << ")" << endl;
					flag = 1;
					break;
				}
				v[i][j] = flib[v[i][j]];
			}
			if (flag)
				break;
		}
		if (!flag)
			cout << "Corrupt" << endl;
	}
	return 0;
} 