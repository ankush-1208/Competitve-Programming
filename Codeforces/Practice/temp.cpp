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
 
 
 
signed main() {
    tsukuyomi
    int t = 1, n;
    cin >> t;
    while(t--) {
        op ("ee" < "lafzximxh");
    }
}

// [null, "kimchi", "ramen", null, "sushi", null, "ramen"]

// ["FoodRatings","changeRating","highestRated","changeRating","changeRating","changeRating","highestRated","highestRated"]
// [[["emgqdbo","jmvfxjohq","qnvseohnoe","yhptazyko","ocqmvmwjq"],
// ["snaxol","snaxol","snaxol","fajbervsj","fajbervsj"],
// [2,6,18,6,5]],
// ["qnvseohnoe",11],["fajbervsj"],["emgqdbo",3],["jmvfxjohq",9],["emgqdbo",14],["fajbervsj"],["snaxol"]]


// ["FoodRatings","changeRating","highestRated","highestRated","highestRated"]
// [[["cpctxzh","bryvgjqmj","wedqhqrmyc","ee","lafzximxh","lojzxfel","flhs"],
// ["wbhdgqphq","wbhdgqphq","mxxajogm","wbhdgqphq","wbhdgqphq","mxxajogm","mxxajogm"],
// [15,5,7,16,16,10,13]],
// ["lojzxfel",1],["mxxajogm"],["wbhdgqphq"],["mxxajogm"]]
// [null,null,"flhs","ee","flhs"]