#include <bits/stdc++.h>
using namespace std;
#define nl << '\n'
#define fi first
#define se second
#define vi vector<int>
#define vec(type,name, sl) vector<type>name(sl)
#define yes cout << "YES"
#define no cout << "NO"
#define int long long
#define double long double
#define pb push_back
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define sz size()
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
//void file() {freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}
/*
var a = document.querySelectorAll(".MJX_Assistive_MathML")
a.forEach(s=> s.remove())
*/

// int kCn(int k, int n)
// {
//     int result=1;
//     for (int i=n, j=1; j<=k; i--, j++) 
//         result=result*i/j;
//     return result;
// }
// int bin_pow(int a,int b,int mod)
// {
//     if(b==0)return 1;
//     int tmp=bin_pow(a,b/2,mod);
//     if((b&1)==false){
//         return (tmp*tmp)%mod;
//     }
//     return (a*(tmp*tmp)%mod)%mod;
// }
void solve()
{
    string s="359 55 283 415 14 204 338 455 282 233 52 38 348 273 69 337 154 494 88 264 317 76 477 296 424 137 168 465 223 318 20 425 193 188 172 427 395 120 281 213 331 214 482 67 498 223 251 278 406 499 343 210 377 380 106 191 332 361 315 372 476 372 162 19 324 173 4 79 42 164 246 291 454 458 422 471 354 445 358 78 140 444 155 167 26 420 379 387 49 221 67 74 159 110 82 193 25 136 300 474 489 207 20 207 13 310 447 179 107 310 6 438 443 43 260 307 268 115 106 109 387 440 124 339 378 226 87 419 271 59 66 416 22";
    int t=count(all(s),' ');
    cout<<t;
}
signed main()
{
    fast_in_out();
    int u = 1;
    //cin >> u;
    while (u--)
    {
        solve();
    }
    return 0;
}
