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
	map<string,pair<int,bool>>in;
	map<int, pair<string,bool>>out;
	int sum = 0;
	string x,name;
	int value;
	while (cin >> x)
	{
		if (x == "clear")
			in.clear(), out.clear();
		if (x == "def")
		{
			cin >> name >> value;
			in[name].first = value;
			in[name].second = 1;
			out[value].first = name;
			out[value].second = 1;
		}
		if (x == "calc")
		{
			bool flag = 1;
			int sign = 1;
			while (x != "=")
			{
				cin >> x;
				if (x == "-")
					sign = -1;
				else if (x=="+")
					sign = 1;
				else if (in[x].second)
				{
					sum += in[x].first * sign;
				}
				else if (x != "=")
				{
					flag = 0;
				}
				cout << x << " ";
			}
			if (flag&&out[sum].second)
				cout << out[sum].first << endl;
			else
				cout << "unknown" << endl;
			sum = 0;
		}
	}
	return 0;

}