/**
 *  author: Khoirul Adib
 *  created: 10.09.2024 14:02:07
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
  ll x, y, z;
  cin >> x >> y >> z;
  ll maks = x;
  if (y > maks) {
    maks = y;
    if (z > maks) {
      maks = z;
    }
  }
  cout << maks << endl;
  return 0;
}