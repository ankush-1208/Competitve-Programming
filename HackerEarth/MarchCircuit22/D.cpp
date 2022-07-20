/* Author: ankush_kr */
#include <bits/stdc++.h>
using namespace std;
#define tsukuyomi ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ip cin>>
#define op cout<<
#define pb push_back
#define endl "\n" 
#define int long long
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vpii vector<pair<int, int>>
#define mpii map<int, int>
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
 
 
/*----------------------------------- Debugging ----------------------------------- */
void __print(int x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << x;}
void __print(const string &x) {cerr << x;}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif
 
const int INF = 1e18;
const int MOD = 1000000007;
 

vvi multiply(vvi &a, vvi &b) {
	int n = a.size();
	vvi res(n, vi(n, 0));

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			for(int k = 0; k < n; k++) {
				res[i][j] += (a[i][k] * b[k][j]) % MOD;
			}
		}
	}

	return res;
}

vvi matrixExp(vvi &a, int n) {
	if(n == 0) {
		int sz = a.size();
		vvi res(sz, vi(sz, 0));
		for(int i = 0; i < sz; i++) {
			res[i][i] = 1;
		}
	}

	if(n == 1) return a;

	vvi temp = matrixExp(a, n/2);
	vvi res = multiply(temp, temp);
	if(n % 2 != 0) {
		res = multiply(res, a);
	}

	return res;
}

 
signed main() {
    tsukuyomi
    int t = 1, n;
    cin >> t;
    while(t--) {
        ip n;
        vvi a(3, vi(3, 0));
        a[0][0] = a[0][1] = a[0][2] = 1;
        a[1][1] = a[1][2] = 1;
        a[2][1] = 1;

        vvi res = matrixExp(a, n);
        op res[0][2] % MOD << endl;
    }
}