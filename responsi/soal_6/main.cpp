/**
 *  author: zukozuko
 *  created: 26.11.2024 13:37:51
 **/
#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int f(int i) {
  // 0!
  if (i == 0)
    return 1;
  // i * (i - 1) * ... * 1
  if (i > 0)
    return f(i - 1) * i;
  return -1;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  cout << f(n) << endl;
  return 0;
}