#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ip cin>>
#define op cout<<
#define endl "\n" 
#define int long long
signed main(){
    fast
    int t, n;
    cin>>t;
    while(t--){
        ip n;
        int ans = 0, res = 0;
        for(int i = 0; i < 31; i++) {
            ans = pow(2, i);
            if(ans > n) {
                break;
            } else {
                res = ans;
            }
        }
        op res - 1 << endl;
    }
}