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
int fixMod(int a, int b){return ((a%b) + b) % b;}
vector<int>v(5);
bool solve(int i,ll res)
{
	if (i == 5)
		return res == 23;
	bool ret=0;
	ret|=solve(i + 1, res+v[i]);
	ret|=solve(i + 1, res-v[i]);
	ret|=solve(i + 1, res*v[i]);
	return ret;
}
int  main()
{
	fast();
	run();
	while (1)
	{
		bool flag = 0;
		for (int i = 0; i < 5; i++)
		{
			cin >> v[i];
			if (v[i])
				flag = 1;
		}
		if (!flag)
			return 0;
		flag = 0;
		sort(all(v));
		do
		{
			if (solve(1,v[0]))
			{
				cout << "Possible" << endl;
				flag = 1;
				break;
			}
		} while (next_permutation(all(v)));
		if (!flag)
			cout << "Impossible" << endl;
	}
	return 0;
	// Work hard in silence, Let SUCCESS be your noise.
}