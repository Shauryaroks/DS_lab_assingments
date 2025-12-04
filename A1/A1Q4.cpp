#include <iostream>
using namespace std;
int main(){
    vector<int>a={1,2,3,4,5};
    reverse(a.begin(),a.end());
    for(int x:a) cout<<x<<" ";
    return 0;
}


int main() {
    int a[] = {1,2,3,4,5}, n = 5, i;
    reverse(a, n);
    printf("Reversed: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

4B:

#include <iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2; cin>>r1>>c1>>r2>>c2;
    if(c1!=r2) return 0;
    vector<vector<int>> A(r1,vector<int>(c1)), B(r2,vector<int>(c2)), C(r1,vector<int>(c2,0));
    for(int i=0;i<r1;i++) for(int j=0;j<c1;j++) cin>>A[i][j];
    for(int i=0;i<r2;i++) for(int j=0;j<c2;j++) cin>>B[i][j];
    for(int i=0;i<r1;i++) for(int j=0;j<c2;j++) for(int k=0;k<c1;k++) C[i][j]+=A[i][k]*B[k][j];
    for(int i=0;i<r1;i++){ for(int j=0;j<c2;j++) cout<<C[i][j]<<" "; cout<<"\n"; }
    return 0;
}

4C:

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int r,c; cin>>r>>c;
    vector<vector<int>> M(r,vector<int>(c));
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) cin>>M[i][j];
    for(int j=0;j<c;j++){ for(int i=0;i<r;i++) cout<<M[i][j]<<" "; cout<<"\n"; }
    return 0;
}
