#include<iostream>
using namespace std;

int main (){
    long long n;
    cin>>n;
    long long tem_n = n;
    long long revers_dgt = 0;

    while(n>0){
        int last_digit = n %10;
        revers_dgt = (revers_dgt *10) + last_digit;
        n = n / 10 ;
    }

    if(revers_dgt == tem_n){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
}