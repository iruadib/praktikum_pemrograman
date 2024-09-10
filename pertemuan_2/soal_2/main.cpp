/**
 *  author: Khoirul Adib
 *  created: 04.09.2024 07:48:16
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
  double a, b, c;
  cout << "Enter coefficients a:" << endl;
  cin >> a;
  cout << "Enter coefficients b:" << endl;
  cin >> b;
  cout << "Enter coefficients c:" << endl;
  cin >> c;
  double d = b * b - 4 * a * c;
  if (d < 0) {
    cout << "There are no real roots" << endl;
  } else if (d == 0) {
    cout << "There is exact one real root" << endl;
    double x = -1 * b / (2 * a);
    cout << fixed << setprecision(6) << "x: " << x << endl;
  } else {
    cout << "There are two distinct real roots" << endl;
    double x1 = (-1 * b + sqrt(d)) / (2 * a);
    double x2 = (-1 * b - sqrt(d)) / (2 * a);
    cout << fixed << setprecision(6) << "x1: " << x1 << endl;
    cout << fixed << setprecision(6) << "x2: " << x2 << endl;
  }
  return 0;
}