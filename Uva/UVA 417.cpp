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
	int cn = 1;
	map<string, int>mp;
	string x="";
	for (char i = 'a'; i <= 'z'; i++)
		x+=i,mp[x]=cn++,x="";
	for (char i = 'a'; i <= 'z'; i++)
	{
		for (char j = i + 1; j <= 'z'; j++)
		{
			x = "";
			x += i;
			x += j;
			mp[x] = cn++;
		}
	}
	for (char i = 'a'; i <= 'z'; i++)
	{
		for (char j = i + 1; j <= 'z'; j++)
		{
			for (char h = j + 1; h <= 'z'; h++)
			{
				x = "";
				x += i;
				x += j;
				x += h;
				mp[x] = cn++;
			}
		}
	}
	for (char i = 'a'; i <= 'z'; i++)
	{
		for (char j = i + 1; j <= 'z'; j++)
		{
			for (char h = j + 1; h <= 'z'; h++)
			{
				for (char g = h + 1; g <= 'z'; g++)
				{
					x = "";
					x += i;
					x += j;
					x += h;
					x += g;
					mp[x] = cn++;
				}
			}
		}
	}
	for (char i = 'a'; i <= 'z'; i++)
	{
		for (char j = i + 1; j <= 'z'; j++)
		{
			for (char h = j + 1; h <= 'z'; h++)
			{
				for (char g = h + 1; g <= 'z'; g++)
				{
					for (char f = g + 1; f <= 'z'; f++)
					{
						x = "";
						x += i;
						x += j;
						x += h;
						x += g;
						x += f;
						mp[x] = cn++;
					}
				}
			}
		}
	}
	while (cin >> x)
	{
		cout << mp[x] << endl;
	}
	return 0;
} 