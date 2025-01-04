#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)

void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }
void init() {
  cin.tie(0);
  cin.sync_with_stdio(0);
}

void solve() {
  int n, x;
  cin >> n;
  vi vect(n, 0);
  map<int, int> mp;
  REP(i, 0, n) {
    REP(j, 0, n - 1) {
      cin >> x;
      vect[x - 1] += j;
    }
  }
  REP(i, 0, n) { mp[vect[i]] = i + 1; }
  for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++) {
    cout << it->second << " ";
  }
  cout << "\n";
}

int main() {
  init();
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}