/**
 *  author: Khoirul Adib
 *  created: 15.11.2024 13:46:01
 **/
#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int f(int n) {
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  return f(n - 2) + f(n - 1);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  cout << f(n) << endl;
  return 0;
}