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
		string x;
		cin >> x;
		if (x.size() != 3)
			cout << 3 << endl;
		else
		{
			int wc = 0;
			string one = "one", two = "two";
			for (int i = 0; i < 3; i++)
			{
				if (x[i] != one[i])
					wc++;
			}
			if (wc <= 1)
				cout << 1 << endl;
			else
				cout << 2 << endl;
		}
	}

	return 0;
}