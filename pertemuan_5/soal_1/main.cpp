/**
 *  author: zukozuko
 *  created: 24.09.2024 13:55:59
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
  vector<string> v;
  // iterasi dari i = 1 ke i = 100
  for (int i = 1; i <= 100; i++) {
    // jika i habis dibagi 3 dan 5, masukkan FizzBuzz
    if (i % 3 == 0 && i % 5 == 0) {
      v.push_back("FizzBuzz");
    } else if (i % 3 == 0) {
      // jika i hanya habis dibagi 3, masukkan Fizz
      v.push_back("Fizz");
    } else if (i % 5 == 0) {
      // jika i hanya habis dibagi 5, masukkan Buzz
      v.push_back("Buzz");
    } else {
      string x = "";
      int tmp = i;
      while (tmp > 0) {
        // mengambil digit terakhir dan disimpan di x
        x = char((tmp % 10) + '0') + x;
        // menghilangkan digit terakhir
        tmp /= 10;
      }
      // jika i tidak habis dibagi 3 atau 5, masukkan angka ke dalam vector v
      v.push_back(x);
    }
  }
  // cetak vector v
  for (string i : v)
    cout << i << " ";
  cout << endl;
  return 0;
}