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
bool chk(int x, int y, int a, int b)
{
	if (x > a)
		return 1;
	if (x == a&&b < y)
		return 1;
	return 0;
}
int  main()
{
	fast();
	run();
	int w, h, q;
	while (cin >> w >> h >> q)
	{
		if (!w&&!h&&!q)
			return 0;
		vector<vector<int>>v(w, vector<int>(h));
		int x1, y1, x2, y2; 
		for (int i = 0; i < q; i++)
		{
			cin >> x1 >> y1 >> x2 >> y2;
			if (x2 < x1)
				swap(x1, x2);
			if (y1>y2)
				swap(y1, y2);
			x1--, y1--, x2--, y2--;
			for (int k = x1; k <= x2; k++)
			{
				for (int j = y1; j <= y2; j++)
				{
					v[k][j] = 1;
				}
			}
		}
		int ans = 0;
		for (int k = 0; k < w; k++)
		{
			for (int j = 0; j < h; j++)
			{
				if (!v[k][j])
					ans++;
			}
		}
		if (!ans)
			cout << "There is no empty spots." << endl;
		else if (ans == 1)
			cout << "There is one empty spot." << endl;
		else
			cout << "There are " << ans << " empty spots." << endl;
	}
	return 0;
} 