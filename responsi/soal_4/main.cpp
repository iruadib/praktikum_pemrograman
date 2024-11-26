/**
 *  author: zukozuko
 *  created: 26.11.2024 13:35:10
 **/
#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, maks = -1e9;
  cin >> n;
  vector<int> v(n);
  for (int& i : v) {
    cin >> i;
    // compare nilai i dan maks
    maks = max(maks, i);
  }
  cout << maks << endl;
  return 0;
}