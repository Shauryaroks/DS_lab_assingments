#include <iostream>
using namespace std;
int main(){
    int r,c; cin>>r>>c;
    vector<vector<int>> a(r,vector<int>(c));
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) cin>>a[i][j];
    for(int i=0;i<r;i++){ long long s=0; for(int j=0;j<c;j++) s+=a[i][j]; cout<<s<<"\n"; }
    for(int j=0;j<c;j++){ long long s=0; for(int i=0;i<r;i++) s+=a[i][j]; cout<<s<<"\n"; }
    return 0;
}
