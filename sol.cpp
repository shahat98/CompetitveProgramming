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
// Run away as you wish, you are always traveling between my ribs.
const int mod = 1e9 + 7;
struct stand
{
	pair<int, pair<int, int>>fr;
	pair<int, pair<int, int>>en;
	pair<int, int>WA;
	pair<int, int>cnt;
	stand()
	{
		fr.second.first = 1e9;
		fr.second.second = 1e9;
		en.second.first = -1;
		en.second.first = -1;
		WA.second = -1;
		cnt.second = -1;
	}
};
pair<int, int> tim(string x)
{
	int m = 0, s = 0;
	for (int i = 0; i < 3; i++)
	{
		m *= 10;
		m += (x[i] - '0');
	}
	for (int i = 4; i < x.size(); i++)
	{
		s *= 10;
		s += (x[i] - '0');
	}
	return{ m, s };
}
bool com(pair<int, int>p1, pair<int, int>p2)
{
	if (p1.first < p2.first)
		return 1;
	if (p1.first == p2.first)
		return p1.second < p2.second;
	return 0;
}
int main()
{
	run();
	fast();
	int t;
	cin >> t;
	while (t--)
	{
		int n, m, k;
		cin >> n >> m >> k;
		stand ans;
		int idP, idS, ver;
		string time;
		map<int, vector<int>>mp;
		vector<pair<pair<int,int>,pair<int,pair<int,int>>>>in(k);
		for (int i = 0; i < k; i++)
		{
			cin >> in[i].second.first >> in[i].second.second.first>>in[i].second.second.second;
			cin >> time;
			in[i].first = tim(time);
		}
		sort(all(in));
		map<int, int>AC;
		map<int, pair<int, pair<pair<int, int>, bool>>>pro;
		for (int i = 0; i < k; i++)
		{
			idP = in[i].second.first;
			idS = in[i].second.second.first;
			ver = in[i].second.second.second;
			idP--;
			idS--;
			if (!mp[idS].size())
				mp[idS].resize(n);
			if (ver == 0)
			{
				mp[idS][idP]++;
			}
			else
			{
				pair<int, int>ti = in[i].first;
				if (ti<ans.fr.second)
				{
					ans.fr.second = ti;
					ans.fr.first = idS;
				}
				if (ti>ans.en.second)
				{
					ans.en.second = ti;
					ans.en.first = idS;
				}
				if (mp[idS][idP] > ans.WA.second)
				{
					ans.WA.second = mp[idS][idP];
					ans.WA.first = idS;
				}
				else if (mp[idS][idP] == ans.WA.second)
					ans.WA.first = min(ans.WA.first, idS);
				if (!mp[idS][idP])
				{
					AC[idS]++;
					if (AC[idS] > ans.cnt.second)
					{
						ans.cnt.second = AC[idS];
						ans.cnt.first = idS;
					}
					else if (AC[idS] == ans.cnt.second)
						ans.cnt.first = min(ans.cnt.first, idS);
				}
				if (!pro[idP].second.second)
				{
					pro[idP].second.second = 1;
					pro[idP].second.first = ti;
					pro[idP].first = idS;
				}
				else
				{
					if (ti<pro[idP].second.first)
					{
						pro[idP].second.first = ti;
						pro[idP].first = idS;
					}
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (pro[i].second.second)
				cout << pro[i].first + 1 << " ";
			else
				cout << -1 << " ";
		}
		cout << endl;
		cout << ans.fr.first + 1 << " " << ans.en.first + 1 << " " << ans.cnt.first + 1 << " " << ans.WA.first + 1;
		cout << endl;
	}
	return 0;
}