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
	string x,sub="";
	bool flag = 0;
	set<string>s;
	while (cin >> x)
	{
		if (x[x.size() - 1] == '-')
		{
			x.erase(x.size()-1,1);
			sub += x;
			flag = 1;
		}
		else
		{
			if (flag)
			{
				sub += x;
				while (sub.size() && !isalpha(sub[0]))
					sub.erase(sub.begin());
				while (sub.size() && !isalpha(sub[x.size() - 1]))
					sub.erase(sub.size() - 1, 1);
				string sub1 = "";
				for (int i = 0; i < sub.size(); i++)
				{
					if (isalpha(sub[i])||sub[i]=='-')
						sub1 += sub[i];
					else
					{
						for (int i = 0; i < sub1.size(); i++)
							sub1[i] = tolower(sub1[i]);
						s.insert(sub1);
						sub1 = "";
					}
				}

				if (sub1 != ""&&sub1 != " ")
				{
					for (int i = 0; i < sub1.size(); i++)
						sub1[i] = tolower(sub1[i]);
					s.insert(sub1);
				}
				flag = 0;
				sub = "";
			}
			else
			{
				while (x.size() && !isalpha(x[0]))
					x.erase(x.begin());
				while (x.size() && !isalpha(x[x.size() - 1]))
					x.erase(x.size() - 1, 1);
				string sub1 = "";
				for (int i = 0; i < x.size(); i++)
				{
					if (isalpha(x[i])||x[i]=='-')
						sub1 += x[i];
					else
					{
						for (int i = 0; i < sub1.size(); i++)
							sub1[i] = tolower(sub1[i]);
						s.insert(sub1);
						sub1 = "";
					}
				}

				if (sub1 != ""&&sub1 != " ")
				{
					for (int i = 0; i < sub1.size(); i++)
						sub1[i] = tolower(sub1[i]);
					s.insert(sub1);
				}
			}
		}
	}	
	for (auto it : s)
		cout << it << endl;
	return 0;
} 