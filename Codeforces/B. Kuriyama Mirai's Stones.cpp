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
	int n;
	cin >> n;
	vector<ll>v(n+1), cp(n+1);
	for (int i = 1; i <= n; i++)
		cin >> v[i];
	cp = v;
	sort(all(cp));
	for (int i = 1; i <= n; i++)
	{
		v[i] += v[i - 1];
		cp[i] += cp[i - 1];
	}
	int q, l, r,tp;
	cin >> q;
	while (q--)
	{
		cin >> tp;
		cin >> l >> r;
		if (l>r)
			swap(l, r);
		if (tp == 1)
			cout << v[r] - v[l - 1] << endl;
		else
			cout << cp[r] - cp[l - 1] << endl;

	}
	return 0;
}