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
		vector<int>v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		sort(all(v));
		ll ans = 0;
		while (v.size()>1)
		{
			sort(all(v));
			v.push_back(v[0] + v[1]);
			ans += v[0] + v[1];
			v.erase(v.begin());
			v.erase(v.begin());
		}
		cout << ans << endl;
	}
	return 0;
} 