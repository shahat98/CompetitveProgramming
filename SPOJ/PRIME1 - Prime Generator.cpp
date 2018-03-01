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
bool valid(char a, int b)
{
	if (a >= 'a'&&a <= 'h'&&b >= 1&&b <= 8)
		return 1;
	else
		return 0;
}
int  main()
{
	fast();
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> m >> n;
		for (int i = m; i <= n; i++)
		{
			if (i == 1 || i == 0)
				continue;
			bool flag = 1;
			for (int j = 2; j*j <= i; j++)
			{
				if (i%j == 0)
				{
					flag = 0;
					break;
				}
			}
			if (flag)
				cout << i << endl;
			
		}
		cout << endl;
	}
	return 0;

}