/**
 *  author: Khoirul Adib
 *  created: 15.11.2024 13:47:45
 **/
#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int n;
vector<int> v;

double f(int i) {
  if (n == i)
    return 0;
  return ((n - i - 1) * f(i + 1) + v[i]) * 1.0 / (n - i);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> n;
  v = vector<int>(n);
  for (int& i : v)
    cin >> i;
  cout << fixed << setprecision(6) << f(0) << endl;
  return 0;
}