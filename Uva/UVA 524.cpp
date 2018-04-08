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
int pr[100];
void prime()
{
	pr[0] = 1, pr[1] = 1;
	for (int i = 2; i < 100; i++)
	{
		if (!pr[i])
		for (int j = i * 2; j < 100; j += i)
		{
			pr[j] = 1;
		}
	}
}
vector<vector<int>>ans;
vector<int>cur;
int vis[100];
int n;
void solve(int idx)
{
	if (idx == n)
	{
		ans.push_back(cur);
		return;
	}
	for (int i = 2; i <= n; i++)
	{
		if (!vis[i]&&!pr[i+cur[idx-1]])
		{
			if (idx == n - 1 && pr[cur[0] + i])
				continue;
			cur[idx] = i;
			vis[i] = 1;
			solve(idx + 1);
			vis[i] = 0;
		}
	}
}
int  main()
{
	fast();
	run();
	prime();
	int t = 0;
	while (cin >> n)
	{
		if (t)
			cout << endl;
		t++;
		cout << "Case " << t << ":" << endl;
		cur.resize(n);
		cur[0] = 1;
		solve(1);
		sort(all(ans));
		for (auto it : ans)
		{
			for (int i = 0; i < it.size();i++)
			{
				if (i)
					cout << " ";
				cout << it[i];
			}
			cout << endl;
		}
		ans.clear();
	}
	return 0;
	
}