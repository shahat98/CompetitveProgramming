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
	int l;
	string x;
	while (cin >> l)
	{
		if (!l)
			return 0;
		cin >> x;
		int ans = 1e9;
		int last_res = -1, last_des = -1;
		for (int i = 0; i < x.size(); i++)
		{
			if (x[i] == 'Z')
			{
				ans = 0;
				break;
			}
			else if (x[i] == 'R')
			{
				if (last_des != -1)
					ans = min(ans, abs(last_des - i));
				last_res = i;
			}
			else if (x[i] == 'D')
			{
				if (last_res != -1)
				{
					ans = min(ans, abs(last_res - i));
				}
				last_des = i;
			}
		}
		cout << ans << endl;
	}
	return 0;
}