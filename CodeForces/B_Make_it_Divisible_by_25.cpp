#include <bits/stdc++.h>
using namespace std;
#define nl << '\n'
#define fi first
#define se second
#define vd vector<double>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vtr vector<string>
#define yes cout << "YES"
#define no cout << "NO"
#define int long long
#define double long double
#define bb push_back
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define sz size()
#define wh while
#define fon(i, l, r) for (int i = l; i <= r; i++)
#define fod(i, r, l) for (int i = r; i >= l; i--)
#define fa(x, a) for (auto x : a)
#define gcd __gcd
#define fast_in_out()                 \
ios_base::sync_with_stdio(false); \
cin.tie(NULL);
const int maxN = 1e6 + 2;
const int minN = 1e5 + 10;
const int mod = 1e9 + 7;
const int INF = 1e18;
void file() {freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}
/*
var a = document.querySelectorAll(".MJX_Assistive_MathML")
a.forEach(s=> s.remove())
*/

void solve()
{
    string s; cin>>s;
    int cnt=0,cnt1=0,cnt2=0,k=0;
    for(int i=s.sz-1;i>=0;i--)
    {
        cnt1++;
        if(s[i]=='0') cnt++;
        else if(s[i]=='0' && cnt>2 || s[i]=='5' && cnt==1)  cnt=2;
        if(cnt==2) break;
    }
    for(int i=s.sz-1;i>=0;i--)
    {
        cnt2++;
        if(s[i]=='5') k=1;
        else if(s[i]=='2' && k==1 || s[i]=='7' && k==1) k=2;
        if(k==2) break;
    }
    if(cnt1==0) cout<<cnt2-2 nl;
	else if(cnt2==0) cout<<cnt1-2 nl;
	else cout<<min(cnt1-2,cnt2-2) nl;
}
signed main()
{
    fast_in_out();
    int u = 1;
    //
    cin >> u;
    while (u--)
    {
        solve();
    }
    return 0;
}
