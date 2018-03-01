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
#include<unordered_map>
using namespace std;
#define sz(x) (x).size()
#define all(v) (v).begin(),(v).end()
#define m_p make_pair
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
map<string, pair<int, int>>pro;
map<string, int>cont;
map<string, vector<char>>tried;
set<char>problem;
set<string>contstant;
int tonum(string x)
{
	int nm = 0;
	for (int i = 0; i < x.size(); i++)
		nm = (nm * 10) + (x[i] - '0');
	return nm;
}
void di(string x, string y)
{
	string name;
	x.erase(x.size() - 1, 1);
	name = x;
	contstant.insert(name);
	y.erase(y.begin());
	y = ',' + y;
	string p = "", nm = "", vr = "";
	for (int i = 0; i < y.size(); i++)
	{
		p = "", nm = "", vr = "";
		if (y[i] == ',')
		{
			p += y[i + 1];
			int j = i + 3;
			for (; y[j] != 'W'&&y[j] != 'A'; j++)
			{
				nm += y[j];
			}
			int num = tonum(nm);
			if (y[j] == 'W')
				cont[name] += pro[p].first*num;
			tried[name].push_back(p[0]);
		}
	}
	vector<char>pp(all(problem));
	for (int i = 0; i < pp.size(); i++)
	{
		if (find(all(tried[name]), pp[i]) == tried[name].end())
		{
			string a = "";
			a += pp[i];
			cont[name] += pro[a].second;
		}
	}
}
int main()
{
	fast();
	int con;
	cin >> con;
	string p, a, b;
	int x, y;
	while (con--)
	{
		pro.clear();
		tried.clear();
		problem.clear();
		int n, m;
		cin >> n >> m;
		for (int i = 0; i < m; i++)
		{
			cin >> p >> a >> x >> b >> y;
			problem.insert(p[0]);
			if (a == "WA")
				pro[p].first = x, pro[p].second = y;
			else
				pro[p].first = y, pro[p].second = x;
		}
		string nm, did;
		for (int i = 0; i < n; i++)
		{
			cin >> nm >> did;
			di(nm, did);
		}
	}
	vector<string>A(all(contstant));
	vector<pair<int, string>>ans;
	for (int i = 0; i < A.size(); i++)
	{
		ans.push_back({ cont[A[i]]*-1, A[i] });
	}
	sort(all(ans));
	//reverse(all(ans));
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i].second << ": " << ans[i].first*-1 << endl;
	}
	return 0;
}