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
	string x;
	cin >> x;
	map<char, int>mp;
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] == 'a')
		{
			mp[x[i]]++;
			continue;
		}
		if (mp[x[i] - 1])
			mp[x[i]]++;
		else
			return cout << "NO" << endl, 0;
	}
	cout << "YES" << endl;
	return 0;
}