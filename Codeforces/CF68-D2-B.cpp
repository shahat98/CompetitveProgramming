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
vector<double>v;
int n, k;
bool chk(double x)
{
	double ad = 0;
	vector<double>v1;
	v1 = v;
	for (int i = 0; i < n; i++)
	{
		if (v1[i]>x)
		{
			ad += (v1[i] - x)*(1.0-(k/100.0));
		}
		else
		{
			ad -= (x - v1[i]);
		}
	}
	return ad>=0;
}
int main()
{
	fast();
	run();
	cin >> n >> k;
	v.resize(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	double st = 0, en = 1e9,mid,ans=-1;
	while (en - st>1e-9)
	{
		mid = (st + en) / 2;
		if (chk(mid))
		{
			ans = max(ans, mid);
			st = mid;
		}
		else
			en = mid;
	}
	cout << fixed << setprecision(9) << ans << endl;
	return 0;
}