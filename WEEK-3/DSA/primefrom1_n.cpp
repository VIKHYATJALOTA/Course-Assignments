#include<iostream>
using namespace std;

void all_int(int n){
   for(int i = 1; i<=n;i++){
    int cnt = 0;
    for(int j = 1;j<=i;j++){
        if (i%j ==0){
            cnt++;
        }
    }
    if (cnt == 2){
            cout<<i<<" "; 
        }
   }

}

int main(){

    int n;
    cin>>n;
    all_int(n);

}