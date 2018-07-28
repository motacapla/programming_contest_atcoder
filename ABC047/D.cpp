//#include <bits/stdc++.h>
#include <iostream>
#include <complex>
#include <sstream>
#include <string>
#include <algorithm>
#include <deque>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <vector>
#include <set>
#include <limits>
#include <cstdio>
#include <cctype>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <climits>
#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define FOR(i, j, k) for(int i = (int)(j); i < (int)(k); ++i)
#define ROF(i, j, k) for(int i = (int)(j); i >= (int)(k); --i)
#define FORLL(i, n, m) for(long long i = n; i < (long long)(m); i++)
#define SORT(v, n) sort(v, v+n)
#define REVERSE(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;
const ll MOD=1000000007LL;
typedef pair<int, int> P;

ll ADD(ll x, ll y) { return (x+y) % MOD; }
ll SUB(ll x, ll y) { return (x-y+MOD) % MOD; }
ll MUL(ll x, ll y) { return x*y % MOD; }
ll POW(ll x, ll e) { ll v=1; for(; e; x=MUL(x,x), e>>=1) if (e&1) v = MUL(v,x); return v; }
ll DIV(ll x, ll y) { /*assert(y%MOD!=0);*/ return MUL(x, POW(y, MOD-2)); }


int
main(void){  
  ll n, t;
  cin >> n >> t;
  ll a[n];
  ll a_min, a_min_prev;
  int count = 0;
  REP(i, n){
    cin >> a[i];    
  }  
  ll diff_m=0LL;
  ll temp_m;
  a_min_prev = a[0];
  FOR(i, 1, n) {    
    a_min = min(a_min_prev, a[i]);
    temp_m = (a[i] - a_min_prev);
    if(temp_m > diff_m) {
      diff_m = temp_m;
      count = 1;
    }
    else if (temp_m == diff_m) {
      ++count;
    }
    a_min_prev = a_min;
  }
 
  cout << count << endl;
  
  return 0;
}
