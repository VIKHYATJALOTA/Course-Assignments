#include<iostream>
using namespace std;

int fact(int n){
    int ans = 1;
    for (int i = 1;i<=n;i++){
       ans *= i;
    }
    return ans;
}


int main(){
    int n;
    cin>>n;
    int result = fact(n);
    cout<<n<<" Factorial is "<<result;
}