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
int  main()
{
	fast();
	int t;
	cin >> t;
	while (t--)
	{
		int n, mn=1e9+1, x;
		cin >> n;
		map<int, int>mp;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			mn = min(mn, x);
			mp[x]++;
		}
		if (mp[mn] % 2)
			cout << "Lucky" << endl;
		else
			cout << "Unlucky" << endl;
	}
}