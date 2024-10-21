/**
 *  author: zukozuko
 *  created: 15.10.2024 13:34:50
 **/
#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

struct Barang {
  string kode;
  string nama;
  int harga;
  int jumlah;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<Barang> v(n);
  int sum = 0, cnt = 0;
  for (auto& i : v) {
    cin >> i.kode;
    cin.ignore();
    getline(cin, i.nama);
    cin >> i.harga;
    cin >> i.jumlah;
    cnt += i.jumlah;
    sum += (i.harga * i.jumlah);
  }
  double avg = sum * 1.0 / cnt;
  if (sum == 0)
    avg = 0.0;
  cout << "Jumlah barang: " << cnt << endl
       << fixed << setprecision(2) << "Rata-rata harga barang: " << avg << endl;
  return 0;
}