#include <iostream>
#include <map>
#include <vector>
using namespace std;


bool cmp(pair<int, int>& a,
        pair<int, int>& b)
{
    return a.second < b.second;
}
int main() {
    map<int,int> mp;
    vector<int> v,subVector;
    int n,a;
    cout<<"Enter number of elements: ";
    cin>>n;
    int s=0;
    for(int i=1;i<=n;i++) {
        mp[i]=0;
    }
    for(int j=0;j<n;j++) {
        for(int i=0;i<n-1;i++) {
            cout<<"Enter number: ";
            cin>>a;
            mp[a]+=i;
            subVector.push_back(a);
        }
    }
    vector<pair<int,int>>pairs(mp.begin(),mp.end());
    sort(pairs.begin(),pairs.end(),cmp);
    for(int i=0;i<pairs.size();i++) {
        cout<<pairs[i].first;
    }




    return 0;
}
