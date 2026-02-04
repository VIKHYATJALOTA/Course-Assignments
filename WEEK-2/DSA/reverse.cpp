#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    do{
        long long rev_n = n%10;
        cout<<rev_n;
        n=n/10;
    }while(n>0);
}