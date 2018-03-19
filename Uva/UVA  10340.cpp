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
vector<int>v;
int  main()
{
	fast();
	run();
	string x, y;
	while (cin >> x >> y)
	{
		int idx = 0;
		for (int i = 0; i < y.size(); i++)
		{
			if (y[i] ==x[idx])
				idx++;
			if (idx == x.size())
				break;
		}
		if (idx == x.size())
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
	// Work hard in silence, Let SUCCESS be your noise.
}