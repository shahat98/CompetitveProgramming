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
	int n;
	cin >> n;
	vector<vector<int>>v(n, vector<int>(n));
	map<int, int>mp;
	for (int i = 0; i < n;i++)
	for (int j = 0; j < n; j++)
		cin >> v[i][j];
	vector<int>ans(n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			bool flag = 1;
			for (int h = 0; h < n; h++)
			{
				if (min(j, v[i][h]) != v[i][h]&&i!=h)
				{
					flag = 0;
					break;
				}
			}
			if (flag&&!mp[j])
			{
				ans[i] = j;
				mp[j] = 1;
				break;
			}
		
		}
	}
	for (int i = 0; i < n; i++)
		cout << ans[i] << " ";
	return 0;
}