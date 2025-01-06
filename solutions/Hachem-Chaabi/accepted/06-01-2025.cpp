#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t, input;
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> res;
        res.assign(n, 0);
        for(int p = 0; p < n; p++ ) {
            for(int s = 0; s < n - 1; s++ ) {
                cin >> input;
                res[input - 1] += s;
            }
        }
        
        int r = 0;
        while(r < n) {
            int min = *min_element(res.begin(), res.end());
            
            if(res[r] == min && min != 9999999) {
                cout << r + 1 << ' ';
                res[r] = 9999999;
                r = -1;
            }
            r++;
        }
        cout << endl;
    }
    
    return 0;
}
