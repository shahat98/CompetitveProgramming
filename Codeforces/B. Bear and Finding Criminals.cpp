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
	int n,a;
	cin >> n >> a;
	vector<int>v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	int dis = 1,ans=0;
	if (v[a - 1])
		ans++;
	a--;
	for (;a-dis>-1||a+dis<n;dis++)
	{
		if (a + dis<n&&a - dis>-1)
		{
			if (v[a + dis] && v[a - dis])
				ans += 2;
		}
		else if (a - dis>-1)
		{
			if (v[a - dis])
				ans++;
		}
		else {
			if (v[a + dis])
				ans++;
		}
	}
	cout << ans << endl;
	return 0;
}