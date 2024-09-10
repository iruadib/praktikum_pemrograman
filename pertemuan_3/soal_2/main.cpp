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
  cout << "Inputkan bilangan 1: " << endl;
  cin >> x;
  cout << "Inputkan bilangan 2: " << endl;
  cin >> y;
  cout << "Inputkan bilangan 3: " << endl;
  cin >> z;
  ll maks = x;
  if (y > maks) {
    maks = y;
  }
  if (z > maks) {
    maks = z;
  }
  cout << "Bilangan terbesar adalah: " << maks << endl;
  return 0;
}