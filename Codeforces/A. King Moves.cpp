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
	char a;
	int b;
	cin >> a >> b;
	int ans = 0;
	if (valid(a + 1, b))
		ans++;
	if (valid(a, b + 1))
		ans++;
	if (valid(a - 1, b))
		ans++;
	if (valid(a, b - 1))
		ans++;
	if (valid(a + 1, b + 1))
		ans++;
	if (valid(a - 1, b - 1))
		ans++;
	if (valid(a - 1, b + 1))
		ans++;
	if (valid(a + 1, b - 1))
		ans++;
	cout << ans << endl;
	return 0;

}