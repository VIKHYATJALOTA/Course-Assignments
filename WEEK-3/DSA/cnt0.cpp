
#include<iostream>
using namespace std;
#define int long long 

int countz(int n){
    int cnt = 0;
    do{
        int digit = n%10;
        n=n/10;
        if (digit==0){
            cnt++;
        }
    }while(n>0);
    return cnt;
}

signed main(){
    int n;
    cin>>n;
    int ans = countz(n);
    cout<<ans;
}