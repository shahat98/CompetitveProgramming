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
	string x;
	set<string>s;
	while (cin >> x)
	{
		while (x.size()&&!isalpha(x[0]))
			x.erase(x.begin());
		while (x.size()&&!isalpha(x[x.size() - 1]))
			x.erase(x.size() - 1, 1);
		string sub = "";
		for (int i = 0; i < x.size(); i++)
		{
			if (isalpha(x[i]))
				sub += x[i];
			else
			{
				for (int i = 0; i < sub.size(); i++)
					sub[i] = tolower(sub[i]);
				s.insert(sub);
				sub = "";
			}
		}

		if (sub != ""&&sub != " ")
		{
			for (int i = 0; i < sub.size(); i++)
				sub[i] = tolower(sub[i]);
			s.insert(sub);
		}
	}
	vector<string>v(all(s));
	for (int i = 0; i < v.size(); i++)
	if (v[i].size())
		cout << v[i] << endl;
	return 0;
}