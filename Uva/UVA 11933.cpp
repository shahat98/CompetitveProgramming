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
	int x;
	while (cin>>x)
	{
		if (!x)
			return 0;
		bitset<31>bt(x);
		string bin = bt.to_string();
		reverse(all(bin));
		while (bin[bin.size() - 1] == '0')
			bin.erase(bin.size() - 1, 1);
		string a = "", b = "";
		bool flag = 0;
		for (int i = 0; i < bin.size(); i++)
		{
			if (bin[i] == '0')
				a += '0', b += '0';
			else
			{
				if (!flag)
					a += '1', b += '0', flag = 1;
				else
					b += '1', a += '0', flag = 0;
			}
		}
		reverse(all(a));
		reverse(all(b));
		bitset<31>bt1(a);
		cout << bt1.to_ulong() << " ";
		bitset<31>bt2(b);
		cout << bt2.to_ulong() << endl;
	}
	return 0;
} 