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
	string a = "AEIOU";
	while (t--)
	{
		string x;
		cin >> x;
		int ans = 0;
		for (int i = 0; i < x.size(); i++)
		{
			if (x[i] >= 'a'&&x[i] <= 'z')
				x[i] -= 32;
			if (find(all(a), x[i])!=a.end())
				ans++;
		}
		cout << ans << endl;
	}
}