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
	int t;
	cin >> t;
	while (t--)
	{
		string x, y;
		cin >> x >> y;
		map<string, pair<int, string>>mp;
		vector<string>ad, re, ch;
		vector<string>ne;
		for (int i = 1; i < y.size()-1; i++)
		{
			string sub = "",sub1="";
			int j = i;
			for (; y[j] != ':'; j++)
				sub += y[j];
			j++;
			for (; y[j] != ','&&j<y.size()-1; j++)
				sub1 += y[j];
			mp[sub].first = 1, mp[sub].second = sub1;
			ne.push_back(sub);
			i = j;
		}
		for (int i = 1; i < x.size() - 1; i++)
		{
			string sub = "", sub1 = "";
			int j = i;
			for (; x[j] != ':'; j++)
				sub += x[j];
			j++;
			for (; x[j] != ','&&j<x.size() - 1; j++)
				sub1 += x[j];
			if (mp[sub].first != 1)
			{
				re.push_back(sub);
			}
			else
			{
				mp[sub].first++;
				if (mp[sub].second != sub1)
					ch.push_back(sub);
			}
			i = j;
		}
		for (int i = 0; i < ne.size(); i++)
		{
			if (mp[ne[i]].first != 2)
				ad.push_back(ne[i]);
		}
		sort(all(ad));
		sort(all(re));
		sort(all(ch));
		if (!ch.size() && !ad.size() && !re.size())
		{
			cout << "No changes" << endl;
		}
		if (ad.size())
		{
			cout << "+";
			for (int i = 0; i < ad.size() - 1; i++)
				cout << ad[i] << ",";
			cout << ad[ad.size() - 1];
			cout << endl;
		}
		if (re.size())
		{
			cout << "-";
			for (int i = 0; i < re.size() - 1; i++)
				cout << re[i] << ",";
			cout << re[re.size() - 1];
			cout << endl;
		}
		if (ch.size())
		{
			cout << "*";
			for (int i = 0; i < ch.size() - 1; i++)
				cout << ch[i] << ",";
			cout << ch[ch.size() - 1];
			cout << endl;
		}
		cout << endl;
	}
	return 0;
} 