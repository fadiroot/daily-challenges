#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;


bool cmp(pair<int, int>& a,
        pair<int, int>& b)
{
    return a.second < b.second;
}
int main() {
    map<int,int> mp;
    int n,a,s;
    cin>>s;
    for(int k=0;k<s;k++) {
        cin>>n;
        for(int i=1;i<=n;i++) {
            mp[i]=0;
        }
        for(int j=0;j<n;j++) {
            for(int i=0;i<n-1;i++) {
                cin>>a;
                mp[a]+=i;
            }
        }
        vector<pair<int,int>> pairs(mp.begin(),mp.end());
        sort(pairs.begin(),pairs.end(),cmp);
        for(int i=0;i<pairs.size();i++) {
            cout<<pairs[i].first<<" ";
        }
        cout<<endl;
        mp.clear();
    }
    return 0;
}
