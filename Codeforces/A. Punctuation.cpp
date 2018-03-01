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
int  main()
{
	fast();
	run();
	string x;
	getline(cin, x);
	string ans = "";
	bool flag = 0;
	for (int i = 0; i < x.size(); i++)
	{
		if (flag)
		{
			if (x[i] >='a'&&x[i]<='z')
			{
				if (ans[ans.size()-1] != ' ')
				ans += ' ';
				ans += x[i];
				flag = 0;
			}
			else if (x[i] != ' ')
			{
				ans += x[i];
				ans += ' ';
				flag = 0;
			}
		}
		else if (x[i] >= 'a'&&x[i] <= 'z')
			ans += x[i];
		else if (x[i] == ' ')
			flag = 1;
		else if (!flag)
			ans += x[i], ans += ' ';

	}
	cout << ans << endl;
	return 0;
}