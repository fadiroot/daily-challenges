#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void process() {
    ll n;
    cin >> n;

    vector<vector<ll>> sequences(n, vector<ll>(n - 1));
    vector<ll> frequency(n + 1, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            cin >> sequences[i][j];
            if (j == 0) frequency[sequences[i][j]]++;
        }
    }

    ll primaryElement = -1;

    for (int i = 1; i <= n; i++) {
        if (frequency[i] == n - 1) {
            primaryElement = i;
            cout << primaryElement << " ";
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        if (sequences[i][0] != primaryElement) {
            for (int j = 0; j < n - 1; j++) {
                cout << sequences[i][j] << " ";
            }
        }
    }
    cout << nline;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll testCases;
    cin >> testCases;
    while (testCases--) {
        process();
    }
    return 0;
}
