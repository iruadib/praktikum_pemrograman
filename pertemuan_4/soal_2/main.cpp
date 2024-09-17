/**
 *  author: zukozuko
 *  created: 17.09.2024 13:37:35
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
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  ll n;
  cin >> n;
  for (ll i = 1; i <= 10; i++) {
    cout << n << " x " << i << " = " << n * i << endl;
  }
  return 0;
}