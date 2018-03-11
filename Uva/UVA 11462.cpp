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
		int mx = -1;
		vector<int>v(100);
		int x;
		for (int i = 0; i < n; i++)
			cin >> x, v[x]++,mx=max(mx,x);
		for (int i = 0; i < mx; i++)
		{
			for (int j = 0; j < v[i]; j++)
				cout << i << " ";
		}
		for (int i = 0; i < v[mx] - 1; i++)
			cout << mx << " ";
		cout << mx;
		cout << endl;
	}
	return 0;
} 