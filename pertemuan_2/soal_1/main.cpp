/**
 *  author: Khoirul Adib
 *  created: 03.09.2024 14:13:58
 **/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

string f(double n) {
  bool neg = (n < 0);
  if (neg)
    n = -n;
  ll nn = static_cast<ll>(n);
  ll dec = static_cast<ll>(round((n - nn) * 100));
  string s = "";
  ll cnt = 0;
  while (nn > 0) {
    ll x = nn % 10;
    s += (x + '0');
    cnt++;
    if (cnt % 3 == 0 && nn >= 10)
      s += '.';
    nn /= 10;
  }
  if (s.empty())
    s = "0";
  reverse(s.begin(), s.end());
  s += ",";
  if (dec < 10)
    s += "0";
  s += to_string(dec);
  if (neg)
    s = '-' + s;
  return s;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  double n, y, z;
  getline(cin, s);
  cin >> n >> y >> z;
  double tx = 2.0 * n / 10;
  double res = n - tx - y - z;
  cout << "Payslip for Employee" << endl;
  cout << "---------------------" << endl;
  cout << "Name: " << s << endl;
  cout << "Tax (20%): Rp" << f(tx) << endl;
  cout << "Installment: Rp" << f(y) << endl;
  cout << "Insurance: Rp" << f(z) << endl;
  cout << "Net Salary: Rp" << f(res) << endl;
  return 0;
}