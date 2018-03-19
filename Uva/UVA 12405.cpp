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
	int t;
	cin >> t;
	int T = 0;
	while (t--)
	{
		T++;
		string x;
		int n;
		cin >> n;
		cin >> x;
		int ans = 0;
		vector<int>vis(x.size()+3);
		for (int i = 0; i < x.size(); i++)
		{
			if (x[i] == '.'&&!vis[i] && (i==0||!vis[i - 1])&&!vis[i+1])
			{
				vis[i] = 1;
				if (i!=0)
				vis[i - 1] = 1;
				vis[i + 1] = 1;
				ans++;
			}
		}
		if (x.size() == 1 && x[0] == '.'||(!ans&&x[x.size()-1]=='.'))
			ans++;
		cout << "Case " << T << ": ";
		cout << ans << endl;
	}
	return 0;
	// Work hard in silence, Let SUCCESS be your noise.
}