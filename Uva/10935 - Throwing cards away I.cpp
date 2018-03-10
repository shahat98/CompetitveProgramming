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
		deque<int>dq(n);
		for (int i = 0; i < n; i++)
		{
			dq[i] = i + 1;
		}
		vector<int>dis;
		while (dq.size() >= 2)
		{
			dis.push_back(dq[0]);
			dq.pop_front();
			int x = dq[0];
			dq.pop_front();
			dq.push_back(x);
		}
		if (n == 1)
			cout << "Discarded cards:";
		else
		cout << "Discarded cards: ";
		for (int i = 0; i < int(dis.size())-1; i++)
		{
			cout << dis[i] << ", ";
		}
		if (dis.size())
			cout << dis[dis.size() - 1];
		cout << endl;
		cout << "Remaining card: " << dq[0] << endl;
	}
	return 0;
}