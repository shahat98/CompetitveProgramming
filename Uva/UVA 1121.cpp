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
int  main()
{
	fast();
	run();
	int n, s;
	while (cin >> n >> s){
		int sum = 0;
		vector<int>v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		int r = 0, ans = 1e9;
		for (int i = 0; i < n; i++)
		{
			while (r < n&&sum < s)
			{
				sum += v[r];
				r++;
				if (sum == s)
					break;
			}
			if (sum >= s)
				ans = min(ans, (r - 1) - i + 1);
			sum -= v[i];
		}
		if (ans != 1e9)
			cout << ans << endl;
		else
			cout << 0 << endl;
	}
	return 0;
	// Work hard in silence, Let SUCCESS be your noise.
}