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
	string x;
	while (getline(cin, x))
	{
		string sub = "",ans="";
		for (int i = 0; i < x.size(); i++)
		{
			if (x[i] == '[')
			{
				int idx; 
				bool flag = 0;
				for (int j = i + 1; j < x.size(); j++)
				{
					idx = j;
					if (x[j] == '[')
					{
						ans = sub + ans;
						sub = "";
						continue;
					}
					if (x[j] == ']')
					{
						flag = 1;
						ans = sub + ans;
						break;
					}
					sub += x[j];
				}
				i = idx;
				if (!flag)
				ans = sub + ans;
				sub = "";
			}
			else if (x[i] != ']')
				ans += x[i];
		}
		cout << ans << endl;
	}
	return 0;
}