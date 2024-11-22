/**
 *  author: Khoirul Adib
 *  created: 22.11.2024 13:33:00
 **/
#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

struct St {
  string id;
  string nama;
  int nilai;
};

void selection(vector<St>& v) {
  for (int i = 0; i < (int)v.size() - 1; i++) {
    int mini = i;
    for (int j = i + 1; j < (int)v.size(); j++) {
      if (v[j].id < v[mini].id ||
          (v[j].nilai < v[mini].nilai && v[j].id == v[mini].id)) {
        mini = j;
      }
    }
    swap(v[i], v[mini]);
  }
}

void bubble(vector<St>& v) {
  bool swp = 0;
  for (int i = 0; i < (int)v.size() - 1; i++) {
    swp = 0;
    for (int j = 0; j < (int)v.size() - i - 1; j++) {
      if (v[j].id > v[j + 1].id ||
          (v[j].id == v[j + 1].id && v[j].nilai > v[j + 1].nilai)) {
        swap(v[j], v[j + 1]);
        swp = 1;
      }
    }
    if (!swp)
      break;
  }
}

void insertion(vector<St>& v) {
  for (int i = 1; i < (int)v.size(); i++) {
    int j = i - 1;
    St tmp = v[i];
    while (j >= 0 && (v[j].id > tmp.id ||
                      (v[j].id == tmp.id && v[j].nilai > tmp.nilai))) {
      v[j + 1] = v[j];
      j--;
    }
    v[j + 1] = tmp;
  }
}

int binser(int l, int r, vector<St> v, string s) {
  int mid = (l + r) / 2;
  if (l > r)
    return -1;
  if (v[mid].id == s) {
    return v[mid].nilai;
  } else if (v[mid].id > s) {
    return binser(l, mid - 1, v, s);
  } else {
    return binser(mid + 1, r, v, s);
  }
  return -1;
}

void linear(vector<St>& v, int val) {
  for (int i = 0; i < (int)v.size(); i++) {
    if (v[i].nilai == val) {
      v[i].nama = "Joko";
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<St> v, temp;
  while (n--) {
    string id, nama, tmp;
    int nilai;
    cin >> id;
    cin.ignore();
    getline(cin, tmp);
    int last = tmp.find_last_of(' ');
    nama = tmp.substr(0, last);
    nilai = stoi(tmp.substr(last + 1));
    v.push_back({id, nama, nilai});
  }
  temp = v;
  selection(temp);
  cout << "Selection sort ascending berdasarkan NISN dahulu, kemudian nilai"
       << endl;
  cout << "----------" << endl;
  for (auto [a, b, c] : temp)
    cout << a << " " << b << " " << c << endl;
  cout << endl;

  temp = v;
  bubble(temp);
  cout << "Bubble sort ascending berdasarkan NISN dahulu, kemudian nilai"
       << endl;
  cout << "----------" << endl;
  for (auto [a, b, c] : temp)
    cout << a << " " << b << " " << c << endl;
  cout << endl;

  temp = v;
  insertion(temp);
  cout << "Insertion sort ascending berdasarkan NISN dahulu, kemudian nilai"
       << endl;
  cout << "----------" << endl;
  for (auto [a, b, c] : temp)
    cout << a << " " << b << " " << c << endl;
  cout << endl;

  string s;
  cin >> s;
  cout << "Binser data dengan NISN " << s << endl;
  cout << "----------" << endl;
  cout << binser(0, v.size() - 1, temp, s) << endl;
  cout << endl;

  int val;
  cin >> val;
  linear(temp, val);
  cout << "Nilai 60 menjadi Joko " << s << endl;
  cout << "----------" << endl;
  for (auto [a, b, c] : temp)
    cout << a << " " << b << " " << c << endl;
  cout << endl;
  return 0;
}