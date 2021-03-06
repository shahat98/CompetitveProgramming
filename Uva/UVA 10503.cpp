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
pair<int, int>lft, rt;
vector<pair<int, int>>pic;
int n, m;
int vis[100];
int mem[51][51];
bool solve(int i,int last)
{
	if (i == n)
		return last == rt.first;
	if (mem[i][last] != -1)
		return mem[i][last];
	bool ret = 0;
	for (int j = 0; j < 2*m; j++)
	{
		if (!vis[j]&&pic[j].first==last)
		{
			vis[j] = 1;
			vis[abs(j - int(pic.size()))] = 1;
			ret|=solve(i + 1, pic[j].second);
			vis[j] = 0;
			vis[abs(j - int(pic.size()))] = 1;
		}
	}
	return mem[i][last]=ret;
}
int main()
{
	fast();
	run();
	while (cin >> n)
	{
		if (!n)
			return 0;
		memset(mem, -1, sizeof(mem));
		cin >> m;
		cin >> lft.first >> lft.second >> rt.first >> rt.second;
		pic.resize(m);
		for (int i = 0; i < m; i++)
		{
			cin >> pic[i].first >> pic[i].second;
			pic.push_back({ pic[i].second, pic[i].first });
		}
		if (solve(0, lft.second))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}