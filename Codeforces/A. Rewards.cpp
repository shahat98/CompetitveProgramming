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
//#define int ll
#define PI 3.14159265
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
	int a, b,cu=0,me=0,n;
	for (int i = 0; i < 3; i++)
		cin >> a, cu += a;
	for (int i = 0; i < 3; i++)
		cin >> a, me += a;
	cin >> n;
	int ans = (cu / 5)+(cu%5!=0);
	ans += (me / 10) + (me % 10!=0);
	if (ans <= n)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}