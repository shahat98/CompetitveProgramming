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
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vector<int>v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		bool flag = 0;
		for (int i = 1; i <= pow(2, n); i++)
		{
			bitset<20>bt(i);
			int sum = 0;
			for (int i = 0; i < bt.size()&&i<v.size(); i++)
			{
				if (bt[i] == 1)
					sum += v[i];
			}
			if (sum == k)
			{
				flag = 1;
				break;
			}
		}
		if (flag)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
} 