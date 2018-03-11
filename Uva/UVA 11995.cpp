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
int  main()
{
	fast();
	run();
	int n;
	while (cin >> n)
	{
		stack<int>st;
		queue<int>qu;
		priority_queue<int>pri;
		int s = 0, q = 0, p = 0;
		int x, y;
		bool imp = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> x >> y;
			if (x == 1)
			{
				st.push(y);
				qu.push(y);
				pri.push(y);
			}
			else
			{
				bool flag = 0;
				if (st.size()&&st.top() == y)
					s++,st.pop(),flag=1;
				if (qu.size()&&qu.front() == y)
					q++,qu.pop(),flag=1;
				if (pri.size()&&pri.top() == y)
					p++,pri.pop(),flag=1;
				if (!flag)
				{
					imp = 1;
				}
			}
		}
		if (imp)
		{
			cout << "impossible" << endl;
			continue;
		}
		vector<int>v(3);
		v[0] = s, v[1] = p, v[2] = q;
		sort(all(v));
		if (v[1]==v[2])
		{
			cout << "not sure" << endl;
			continue;
		}
		if (s > q&&s > p)
			cout << "stack" << endl;
		else if (q > p)
			cout << "queue" << endl;
		else
			cout << "priority queue" << endl;
	}
	return 0;
} 