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
void fast()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
// Run away as you wish, you are always traveling between my ribs.
int  main()
{
	fast();
	run();
	ll n, m;
	while (cin >> n >> m)
	{
		vector<ll>v(m);
		for (int i = 0; i < m; i++)
			cin >> v[i];
		ll en = pow(2, m);
		vector<ll>ans;
		ll mx = 0;
		for (int i = 1; i <= en; i++)
		{
			bitset<21>bt(i);
			string bin = bt.to_string();
			reverse(all(bin));
			while (bin[bin.size() - 1] == '0')
				bin.erase(bin.size() - 1,1);
			ll sum = 0;
			for (int j = 0; j < bin.size()&&j<v.size(); j++)
			{
				if (bin[j] == '1')
					sum += v[j];
			}
			if (sum>mx&&sum<=n)
			{
				mx = sum;
				ans.clear();
				for (int j = 0; j < bin.size() && j < v.size(); j++)
				if (bin[j] == '1')
					ans.push_back(v[j]);
			}
		}
		for (int i = 0; i < ans.size(); i++)
			cout << ans[i] << " ";
		cout << "sum:" << mx << endl;
	}
	return 0;
	// Work hard in silence, Let SUCCESS be your noise.
}