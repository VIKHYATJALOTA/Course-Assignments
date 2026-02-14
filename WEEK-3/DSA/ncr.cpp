#include<iostream>
using namespace std;
#define int long long

int factorial(int n){
    int ans=1;
    for (int i = 1; i<=n;i++){
        ans*=i;
    }
   return ans;
}

signed main(){
    int n,r;
    cin>>n>>r;
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n-r);
    cout<<(nfact)/ (rfact*nrfact);
}