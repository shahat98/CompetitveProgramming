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
	string x, y;
	cin >> x >> y;
	if (x.size() > y.size())
		swap(x, y);
	int mn = min(x.size(), y.size());
	int ans = 0;
	for (int i = 1; i <= mn; i++)
	{
		if (x.size() % i == 0 && y.size() % i == 0)
		{
			string z = x.substr(0, i);
			string a = z, b = z;
			while (a.size() < x.size())
				a += z;
			while (b.size() < y.size())
				b += z;
			if (a == x&&y == b)
				ans++;
		}
	}
	cout << ans << endl;
	return 0;
}