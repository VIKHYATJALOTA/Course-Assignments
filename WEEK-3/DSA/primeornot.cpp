#include<iostream>
using namespace std;

void primecheck(int n){
    int count=0;
    for (int i = 1; i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if (count ==2){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
}

int main(){
    int n;
    cin>>n;
    primecheck(n);
}