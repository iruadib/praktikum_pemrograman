/**
 *  author: zukozuko
 *  created: 24.09.2024 14:02:54
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
  int n;
  // pengguna memasukkan nilai n
  cin >> n;
  // inisialisasi vector v dengan n indeks
  vector<int> v(n);
  // pengguna memasukkan n nilai ke vector v
  for (int& i : v)
    cin >> i;
  // menswap elemen setengah awal ke setengah akhir dengan order yang terbalik
  for (int i = 0; i < n / 2; i++) {
    // ekuivalen dengan swap(v[i], v[n -1, i])
    v[i] ^= v[n - 1 - i];
    v[n - 1 - i] ^= v[i];
    v[i] ^= v[n - 1 - i];
  }
  // cetak vector v
  for (int i : v)
    cout << i << " ";
  cout << endl;
  return 0;
}