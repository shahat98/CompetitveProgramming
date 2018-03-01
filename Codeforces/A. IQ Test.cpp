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
bool valid(int i, int j)
{
	if (i<0 || j>3 || i > 3 || j < 0)
		return 0;
	return 1;
}
int  main()
{
	fast();
	vector<vector<char>>v(4, vector<char>(4));
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> v[i][j];
		}
	}
	map<char, char>flip;
	flip['#'] = '.';
	flip['.'] = '#';
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			char c = v[i][j];
			v[i][j] = flip[v[i][j]];
			for (int h = 0; h < 4; h++)
			{
				for (int g = 0; g < 4; g++)
				{
					if (valid(h + 1, g + 1) && valid(h + 1, g) && valid(h, g + 1))
					{
						if (v[h][g] == v[h + 1][g] && v[h + 1][g + 1] == v[h][g + 1]&&v[h][g]==v[h+1][g+1])
						{
							return cout << "YES" << endl,0;
						}
					}
				}
			}
			v[i][j] = c;
		}
	}
	cout << "NO" << endl;
	return 0;

}