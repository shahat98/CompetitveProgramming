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
int fixMod(int a, int b){ return ((a%b) + b) % b; }
void fast()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
vector<vector<int>>grid;
int w, n;
int tonum(string s)
{
	int num = 0;
	for (int i = 0; i < s.size(); i++)
	{
		num *= 10;
		num += (s[i] - '0');
	}
	return num;
}
int mem[101][101];
int solve(int i, int j)
{
	if (i == w || j == n)
		return 0;
	if (i == w - 1 && j == n - 1)
		return 1;
	if (mem[i][j] != -1)
		return mem[i][j];
	if (grid[i][j])
		return 0;
	int ret = 0;
	ret += solve(i + 1, j) + solve(i, j + 1);
	return mem[i][j]=ret;
}
int main()
{
	fast();
	run();
	int t;
	cin >> t;
	while (t--)
	{
		memset(mem, -1, sizeof(mem));
		cin >> w >> n;
		grid = vector<vector<int>>(w, vector<int>(n));
		string s;
		stringstream ss;
		int x, y;
		for (int i = 0; i < w; i++)
		{
			cin >> x;
			//cin.ignore();
			getline(cin, s);
			string sub = "";
			for (int j = 0; j < s.size(); j++)
			{
				if (s[j] == ' ')
				{
					if (sub.size())
					{
						y = tonum(sub);
						grid[x - 1][y - 1] = 1;
						sub = "";
					}
				}
				else
					sub += s[j];
			}
			if (sub.size())
			{
				y = tonum(sub);
				grid[x - 1][y - 1] = 1;
				sub = "";
			}
		}
		cout << solve(0, 0) << endl;
	}
	return 0;
}