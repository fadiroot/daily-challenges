#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++) 
#define PB push_back
typedef long long ll;
 
int main () {
    
    int test  , n ; 
    cin >> test ; 
    
    REP(j , 0 , test ){
        cin >> n ; 
        vector<int> perm(n , 0) ; 
        REP(i , 0 , n ){
            REP(k , 0 , n-1){
                int a ; 
                cin >> a ; 
                perm[a-1] += k ; 
            }
        }
        REP(i , 0 , n){
            int min = *min_element(perm.begin(), perm.end());
            auto it = find(perm.begin(), perm.end(), min);
            cout << distance(perm.begin() , it) + 1 << " " ; 
            perm[distance(perm.begin() , it)] = 999999 ; 
        }
        cout << "\n" ; 
        
        
    }
    return 0 ; 
    
}
