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
		if (!n) 
			return 0;
		while (1)
		{
			int x;
			bool flag = 0;
			stack<int>st;
			int idx = 1;
			for (int i = 0; i < n; i++)
			{
				cin >> x;
				if (!x)
				{
					flag = 1;
					break;
				}
				if (st.size()&&st.top()==x)
				{
					st.pop();
				}
				else
				{
					for (; idx <= n; idx++)
					{
						if (idx == x)
						{
							idx++;
							break;
						}
						st.push(idx);
					}
				}
			}
			if (flag)
				break;
			if (!st.size())
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
		
		cout << endl;
	}
	return 0;
}