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
	int a1, a2, a3, b1, b2, b3;
	cin >> a1 >> a2 >> a3;
	cin >> b1 >> b2 >> b3;
	int alice = 0, bob = 0;
	if (a1 > b1)
		alice++;
	else if (b1 > a1)
		bob++;
	if (a2 > b2)
		alice++;
	else if (b2 > a2)
		bob++;
	if (a3 > b3)
		alice++;
	else if (b3 > a3)
		bob++;
	cout << alice << " " << bob << endl;
	return 0;

}