/**
 *  author: Khoirul Adib
 *  created: 17.09.2024 13:29:11
 **/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin >> n;
  ll sum = 0;
  for (ll i = 1; i <= n; i++) {
    sum += i;
  }
  cout << sum << endl;
  return 0;
}