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
	int n;
	cin >> n;
	string x;
	cin >> x;
	int mid = x.size() / 2;
	if (x.size() % 2 == 0)
		mid--;
	vector<char>v(x.size());
	v[mid] = x[0];
	int idx = 1;
	for (int i = 1; i < int(x.size())-1; i++)
	{
		if (i % 2)
			v[mid - idx] = x[i];
		else
			v[mid + idx++] = x[i];
	}
	v[v.size() - 1] = x[x.size() - 1];
	for (int i = 0; i < v.size(); i++)
		cout << v[i];
	cout << endl;
	return 0;

}