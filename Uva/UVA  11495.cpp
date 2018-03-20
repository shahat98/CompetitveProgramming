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
vector<int>v;
ll ans = 0;
void merge(int st, int en,int mid)
{
	vector<int>l, r;
	for (int i = st; i <= mid; i++)
		l.push_back(v[i]);
	for (int i = mid + 1; i <= en; i++)
		r.push_back(v[i]);
	int le = 0, ri = 0;
	for (int i = st; i <=en; i++)
	{
		if (le > mid-st)
			v[i] = r[ri++];
		else if (ri >= en-mid)
			v[i] = l[le++];
		else if (l[le] < r[ri])
			v[i] = l[le++];
		else
			v[i] = r[ri++],ans+=((ri-i-1)+mid+1);
	}
}
void split(int st, int en)
{
	if (st < en)
	{
		int mid = (st + en) / 2;
		split(st, mid);
		split(mid + 1, en);
		merge(st, en, mid);
	}
}
int  main()
{
	fast();
	run();
	int n;
	while (cin >> n&&n){
		v.resize(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		split(0, n - 1);
		if (ans % 2)
			cout << "Marcelo" << endl;
		else
			cout << "Carlos" << endl;
		ans = 0;
	}
	return 0;
	// Work hard in silence, Let SUCCESS be your noise.
}